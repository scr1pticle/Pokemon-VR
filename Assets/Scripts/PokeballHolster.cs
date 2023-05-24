using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.XR.Interaction.Toolkit;

public class PokeballHolster : MonoBehaviour
{
    public GameObject prefab;
    [Range(0.01f, 1f)]
    public float heightRatio;
    public GameObject mainCamera;
    public GameObject socket;

    private GameObject holsterBall;
    private XRGrabInteractable grabInteractable;
    private Vector3 startPos;
    void Start()
    {
        holsterBall = Instantiate(prefab, socket.transform.position, socket.transform.rotation);
        grabInteractable = holsterBall.GetComponent<XRGrabInteractable>();
        grabInteractable.selectEntered.AddListener(SpawnNewBall);
    }

    private void SpawnNewBall(SelectEnterEventArgs arg)
    {
        holsterBall.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
        holsterBall.GetComponent<Collider>().isTrigger = false;
        holsterBall = Instantiate(prefab, transform.position, Quaternion.identity);
        grabInteractable.selectEntered.RemoveAllListeners();
        grabInteractable = holsterBall.GetComponent<XRGrabInteractable>();
        grabInteractable.selectEntered.AddListener(SpawnNewBall);
    }

    private void Update()
    {
        holsterBall.transform.SetPositionAndRotation(socket.transform.position, socket.transform.rotation);
        transform.SetPositionAndRotation(new Vector3(mainCamera.transform.position.x, transform.position.y, mainCamera.transform.position.z), new Quaternion(transform.rotation.x, mainCamera.transform.rotation.y, transform.rotation.z, mainCamera.transform.rotation.w));
    }
}
