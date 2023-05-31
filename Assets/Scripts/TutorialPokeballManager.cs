using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class TutorialPokeballManager : MonoBehaviour
{
    public GameObject prefab;

    private RespawnWhenDropped pokeball;
    void Start()
    {
        Respawn();
    }

    private void Respawn()
    {
        pokeball = Instantiate(prefab, transform.position, transform.rotation).GetComponent<RespawnWhenDropped>();
        pokeball.dropped.AddListener(Respawn);
    }

    private void OnDestroy()
    {
        pokeball.enabled = false;
    }
}
