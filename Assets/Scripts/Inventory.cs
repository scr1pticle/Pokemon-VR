using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Unity.VisualScripting.Antlr3.Runtime.Misc;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    public static Inventory inst;

    public GameObject inventory;
    public SideMenu sideMenu;
    public InputActionProperty showButton;

    public UnityEvent OnOpen;

    private List<Slot> slots;

    private void Awake()
    {
        if (inst == null) inst = this;
        else Destroy(this);
    }
    private void Start()
    {
        slots = GetComponentsInChildren<Slot>().ToList();
        inventory.SetActive(false);
        sideMenu.gameObject.SetActive(false);
    }
    void Update()
    {
        if (showButton.action.WasPressedThisFrame())
        {
            inventory.SetActive(!inventory.activeSelf);
            if(inventory.activeSelf) OnOpen.Invoke();
            foreach (var item in slots)
            {
                if (item.itemInSlot != null)
                {
                    item.itemInSlot.SetActive(inventory.activeSelf);
                }
            }
        }
    }

    public void EnableSideMenu(Slot slot)
    {
        if(slot.itemInSlot == null) return;
        var pokemon = slot.itemInSlot.GetComponentInChildren<Pokemon>();
        var health = pokemon.GetComponent<Health>();
        sideMenu.name.text = pokemon.name;
        sideMenu.level.text = $"Level {pokemon.GetLevel()}";
        sideMenu.levelBar.localScale = new Vector3(pokemon.expScale.transform.localScale.x, 1, 1);
        sideMenu.healthbar.localScale = new Vector3((float)health.GetHealth()/ health.GetMaxHealth(), 1, 1);
        sideMenu.healthText.text = $"{health.GetHealth()}/{health.GetMaxHealth()}";
        var prevTypes = sideMenu.typesParent.GetComponentsInChildren<Image>();
        if(prevTypes.Length > 0) 
        { 
            foreach (var item in prevTypes) 
            { 
                Destroy(item.gameObject);
            }
        }
        foreach (var item in pokemon.type)
        {
            Instantiate(sideMenu.typePrefabs[item], sideMenu.typesParent.position, sideMenu.typesParent.rotation, sideMenu.typesParent);
        }
        sideMenu.attack.text = pokemon.Stats[Stat.Attack].ToString();
        sideMenu.defense.text = pokemon.Stats[Stat.Defense].ToString();
        sideMenu.special.text = pokemon.Stats[Stat.Special].ToString();
        sideMenu.speed.text = pokemon.Stats[Stat.Speed].ToString();
        if(sideMenu.selectedSlot != null)
        {
            if (sideMenu.selectedSlot == slot)
            {
                sideMenu.gameObject.SetActive(false);
                sideMenu.selectedSlot = null;
                slot.grabFromSlot.RemoveAllListeners();
            }
            else
            {
                sideMenu.selectedSlot = slot;
                slot.grabFromSlot.AddListener(delegate { sideMenu.gameObject.SetActive(false); sideMenu.selectedSlot = null; });
            }
        }
        else
        {
            sideMenu.gameObject.SetActive(true);
            sideMenu.selectedSlot = slot;
            slot.grabFromSlot.AddListener(delegate { sideMenu.gameObject.SetActive(false); sideMenu.selectedSlot = null; });
        }
    }
    public List<Slot> GetSlots()
    {
        return slots;
    }
}
