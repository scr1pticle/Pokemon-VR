using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RespawnWhenDropped : MonoBehaviour
{
    public UnityEvent dropped;
    private Vector3 _startPos;
    private Quaternion _startRot;
    /*private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("Ground") && GetComponent<Pokeball>().GetContainedPokemon() == null)
        {
            dropped.Invoke();
            Destroy(gameObject);
        }
    }*/

    private void Start()
    {
        _startPos = transform.position;
        _startRot = transform.rotation;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Ground") && GetComponent<Pokeball>().GetContainedPokemon() == null)
        {
            transform.position = _startPos;
            transform.rotation = _startRot;
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
        }
    }
}
