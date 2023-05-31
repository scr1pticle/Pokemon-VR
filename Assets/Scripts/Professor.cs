using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Professor : MonoBehaviour
{
    public Pokeball startPokeball;
    public GameObject pokeballPrefab;
    public List<GameObject> pokemonPbs;
    private List<GameObject> startingPokemons = new();
    public List<Transform> spawnPoints;
    public GameObject tutorialBounds;
    public GameObject dialogueBox;
    public GameObject clickToContinue;
    public GameObject pokeballSpawner;
    public Inventory inventory;
    public TextMeshProUGUI dialogueText;
    public float TimeBetweenDialogues = 3f;
    public bool caught = false;
    public bool pressed = false;
    public bool released = false;
    public bool returned = false;

    private Pokemon _chosenPokemon;
    private Animator _animator;
    private bool clicked;

    public void Clicked()
    {
        clicked = true;
    }
    private void Awake()
    {
        dialogueBox.SetActive(false);
        clickToContinue.SetActive(false);
        _animator = GetComponent<Animator>();
    }
    public void StartTutorial()
    {
        GetComponent<XRSimpleInteractable>().enabled = false;
        StartCoroutine(Tutorial());
    }

    private IEnumerator Tutorial()
    {
        dialogueBox.SetActive(true);
        _animator.SetTrigger("Talk");
        dialogueText.text = "Hey there! Ready to become a Pokemon trainer?";
        yield return new WaitForSeconds(TimeBetweenDialogues);
        _animator.SetTrigger("Talk");
        dialogueText.text = "Then choose one of these! Just take the Ultra Ball from the table and throw it at the pokemon you like the most.";
        SpawnPokemons();
        while (!caught)
        {
            yield return null;
        }
        _animator.SetTrigger("Talk");
        dialogueText.text = "Great throw! But remember, you can't catch wild pokemon like that.";
        clickToContinue.SetActive(true);
        while (!clicked)
        {
            yield return null;
        }
        clicked = false;
        _animator.SetTrigger("Talk");
        dialogueText.text = "You have to fight them and when it is your turn you can throw a pokeball at the enemy.";
        while (!clicked)
        {
            yield return null;
        }
        clicked = false;
        _animator.SetTrigger("Talk");
        dialogueText.text = "The lower foe's HP are the better shot you have at catching him.";
        while (!clicked)
        {
            yield return null;
        }
        clicked = false;
        clickToContinue.SetActive(false);
        _animator.SetTrigger("Talk");
        dialogueText.text = "Now open your inventory by pressing X and place your pokeball there.";
        inventory.OnOpen.AddListener(delegate { pressed = true; });
        while (!pressed)
        {
            yield return null;
        }
        clickToContinue.SetActive(true);
        _animator.SetTrigger("Talk");
        dialogueText.text = "You can view his stats by pressing trigger btton while aiming at your pokemon in the inventory.";
        while (!clicked)
        {
            yield return null;
        }
        clicked = false;
        clickToContinue.SetActive(false);
        _animator.SetTrigger("Talk");
        dialogueText.text = "Okay now to release your pokemon take the pokeball out of your inventory and throw it at the ground.";
        startPokeball.GetContainedPokemon().GetComponent<Pokemon>().OnRelease.AddListener(delegate { released = true; });
        while (!released)
        {
            yield return null;
        }
        _animator.SetTrigger("Talk");
        clickToContinue.SetActive(true);
        dialogueText.text = "Great! If you want to fight a wild pokemon just release your pokemon near him like you did just now.";
        while (!clicked)
        {
            yield return null;
        }
        clicked = false;
        clickToContinue.SetActive(false);
        _animator.SetTrigger("Talk");
        dialogueText.text = "And to get your pokemon back inside the pokeball just take one from your waist, aim at your pokemon and press trigger button.";
        startPokeball.GetContainedPokemon().GetComponent<Pokemon>().OnRetrieve.AddListener(delegate { returned = true; });
        while (!returned)
        {
            yield return null;
        }
        _animator.SetTrigger("Talk");
        dialogueText.text = "Nice! Now you are ready for the upcoming battles!";
        yield return new WaitForSeconds(TimeBetweenDialogues);
        _animator.SetTrigger("Talk");
        dialogueText.text = "Down that path there is a Pokemon Gym, when you feel strong enough try to challenge it!";
        yield return new WaitForSeconds(TimeBetweenDialogues);
        dialogueText.text = "That's it! If your pokemon ever faints, you can heal him at this station. Good luck!";
        yield return new WaitForSeconds(TimeBetweenDialogues);
        _animator.SetTrigger("Talk");
        Destroy(tutorialBounds);
        Destroy(dialogueBox);
        PokemonManager.inst.SpawnPokemons();
        enabled = false;
    }

    private void SpawnPokemons()
    {

        for (int i = 0; i < 3; i++)
        {
            var pokeball = Instantiate(pokeballPrefab, spawnPoints[i].position, spawnPoints[i].rotation).GetComponent<Pokeball>();
            pokeball.SetStartPokemon(pokemonPbs[i]);
            pokeball.GetContainedPokemon().GetComponent<Pokemon>().alwaysIdle = true;
            pokeball.GetContainedPokemon().GetComponent<Pokemon>().isCatchable = true;
            startingPokemons.Add(pokeball.GetContainedPokemon());
            startingPokemons[i].GetComponent<Pokemon>().OnCapture.AddListener(delegate { caught = true; pokeball.GetContainedPokemon().GetComponent<Pokemon>().alwaysIdle = false;startPokeball.GetComponent<RespawnWhenDropped>().enabled = false; StartCoroutine(DespawnPokemons()); });
        }
    }

    private IEnumerator DespawnPokemons()
    {
        startingPokemons.Remove(startPokeball.GetContainedPokemon());
        float current = 1;
        while(current > 0)
        {
            current = Mathf.MoveTowards(current, 0, 2 * Time.deltaTime);
            foreach (var item in startingPokemons)
            {
                item.transform.localScale = new Vector3(current, current, current);
                yield return null;
            }
        }
        foreach (var item in startingPokemons)
        {
            Destroy(item);
        }
    }
}
