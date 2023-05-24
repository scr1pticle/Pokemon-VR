using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Interaction.Toolkit;

public class Slot : MonoBehaviour
{
    public GameObject itemInSlot;
    public Transform attachPosition;
    private Image slotImage;
    Color origColor;
    public InputActionProperty grabButton;
    public UnityEvent grabFromSlot;

    private void Start()
    {
        slotImage = GetComponent<Image>();
        origColor = Color.cyan;
        slotImage.color = origColor;
    }

    private void OnTriggerStay(Collider other)
    {
        if (itemInSlot != null) return;
        GameObject obj = other.gameObject;
        if (!IsItem(obj)) return;
        if (!other.GetComponent<Pokeball>().isContainingPokemon) return;
        if (grabButton.action.WasReleasedThisFrame())
        {
            InsertItem(obj);
        }
    }

    bool IsItem(GameObject obj)
    {
        return obj.GetComponent<Pokeball>();
    }

    public void InsertItem(GameObject obj)
    {
        var pokemon = obj.GetComponent<Pokeball>().GetContainedPokemon();
        pokemon.SetActive(false);
        foreach (var item in obj.GetComponentsInChildren<SkinnedMeshRenderer>())
        {
            item.enabled = false;
        }
        pokemon.transform.localScale = Vector3.one / 3;
        pokemon.GetComponent<Pokemon>().UI.SetActive(false);
        pokemon.SetActive(true);
        obj.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
        obj.transform.position = attachPosition.position;
        obj.GetComponent<Pokeball>().inSlot = true;
        obj.GetComponent<Pokeball>().currentSlot = this;
        itemInSlot = obj;
        slotImage.color = Color.grey;
    }
    public void ResetColor()
    {
        slotImage.color = origColor;
        grabFromSlot.Invoke();
    }

    private void Update()
    {
        if(itemInSlot != null)
        {
            itemInSlot.transform.position = attachPosition.position;
            itemInSlot.transform.rotation = attachPosition.rotation;
        }

    }
}
