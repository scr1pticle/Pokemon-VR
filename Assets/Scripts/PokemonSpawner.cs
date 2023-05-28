using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonSpawner : MonoBehaviour
{
    public GameObject pokemonPrefab;

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player")) Instantiate(pokemonPrefab, transform.position, Quaternion.Euler(0, Random.Range(0, 359), Random.Range(0, 359)));
    }
}
