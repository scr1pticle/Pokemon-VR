using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using Unity.VisualScripting;
using UnityEngine;

public class Player : MonoBehaviour
{
    public static Player inst;
    private List<Pokemon> _partyPokemon = new();
    private void Awake()
    {
        if (inst == null) inst = this;
        else Destroy(this);
    }

    public void AddPokemon(Pokemon pokemon)
    {
        _partyPokemon.Add(pokemon);
    }

    public List<Pokemon> GetPartyPokemon()
    {
        return _partyPokemon;
    }
}
