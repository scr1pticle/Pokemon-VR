using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[System.Serializable]
public class TypePrefabPair
{
    public PokemonType key;
    public GameObject val;
}
public class SideMenu : MonoBehaviour
{
    public Slot selectedSlot = null;
    public List<TypePrefabPair> TypePrefabPairs;
    public Dictionary<PokemonType, GameObject> typePrefabs = new();
    public TextMeshProUGUI name;
    public TextMeshProUGUI level;
    public Transform levelBar;
    public Transform healthbar;
    public TextMeshProUGUI healthText;
    public Transform typesParent;
    public TextMeshProUGUI attack;
    public TextMeshProUGUI defense;
    public TextMeshProUGUI special;
    public TextMeshProUGUI speed;

    private void Awake()
    {
        foreach (var item in TypePrefabPairs)
        {
            typePrefabs.Add(item.key, item.val);
        }
    }
}
