using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Healer : MonoBehaviour
{
    private Health pokemon;
    public GameObject canvas;
    public GameObject health;

    private void Start()
    {
        canvas.SetActive(false);
    }
    public void StartHealing(SelectEnterEventArgs args)
    {
        canvas.SetActive(true);
        pokemon = args.interactableObject.transform.GetComponent<Pokeball>().GetContainedPokemon().GetComponent<Health>();
        health.transform.localScale = new Vector3((float)pokemon.GetHealth()/pokemon.GetMaxHealth(), 1, 1);
        StartCoroutine(Healing());
    }

    private IEnumerator Healing()
    {
        while (true)
        {
            yield return new WaitForSeconds(2);
            pokemon.Heal(20);
            print(pokemon.GetComponent<Pokemon>().name + " | " + pokemon.GetHealth());
            health.transform.localScale = new Vector3((float)pokemon.GetHealth() / pokemon.GetMaxHealth(), 1, 1);
            if (pokemon.GetHealth() >= pokemon.GetMaxHealth())
            {
                canvas.SetActive(false);
                yield break;
            }
        }
    }
}
