using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARSubsystems;

public class Trainer : MonoBehaviour
{
    public Transform pokeballParent;
    public GameObject pokeball;
    public GameObject pokeballPb;
    public Teleporter entrance;
    public GameObject pokemonPb;

    private void Start()
    {
        entrance.onTeleport.AddListener(delegate { Invoke(nameof(Entered), 2); } );
        BackToTrainer();
    }
    private void Entered()
    {
        GetComponent<Animator>().SetTrigger("Throw");
    }
    public void ThrowBall()
    {
        pokeball.GetComponent<Pokeball>().Release();
    }

    public void BackToTrainer()
    {
        pokeball = Instantiate(pokeballPb, pokeballParent.position, pokeballParent.rotation, pokeballParent);
        pokeball.GetComponent<Rigidbody>().useGravity = false;
        pokeball.GetComponent<Pokeball>().SetStartPokemon(pokemonPb, this);
    }
}
