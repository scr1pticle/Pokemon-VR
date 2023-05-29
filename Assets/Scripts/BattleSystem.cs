using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using TMPro;
using Unity.VisualScripting;
using Unity.VisualScripting.Antlr3.Runtime.Misc;
using UnityEditor;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;
using Random = UnityEngine.Random;

public enum BattleState
{
    Start,
    PlayerTurn,
    EnemyTurn,
    Pause,
    AttemptingCapture,
    Captured,
    Win,
    Lose
}
public class BattleSystem : MonoBehaviour
{
    public static BattleSystem inst;

    public float rotationSpeed = 2;
    public GameObject pokeballPb;
    [Header("BattleMenu")]
    public GameObject battleMenu;
    public Transform moveParent;
    public GameObject buttonPrefab;
    public TextMeshProUGUI dialogueText;
    public GameObject runButton;

    [Header("Battle Values")]
    [Range(0, 255)]
    public byte criticalHitThreshold;
    public float faintSpeed = 2;
    public float timeBetweenDialogues;
    [Header("SFX")]
    public List<AudioClip> hitSounds;
    private BattleState state;
    private GameObject _allyPokemon;
    private GameObject _enemyPokemon;


    private Dictionary<int, string> stageChangeLookup = new() { 
        { -6, "Pokemon's stat severely fell!" }, 
        { -5, "Pokemon's stat severely fell!" }, 
        { -4, "Pokemon's stat severely fell!" }, 
        { -3, "Pokemon's stat severely fell!" }, 
        { -2, "Pokemon's stat greatly fell!" }, 
        { -1, "Pokemon's stat fell!" },
        { 1, "Pokemon's stat rose!" },
        { 2, "Pokemon's stat greatly rose!" },
        { 3, "Pokemon's stat rose drastically!" },
        { 4, "Pokemon's stat rose drastically!" },
        { 5, "Pokemon's stat rose drastically!" },
        { 6, "Pokemon's stat rose drastically!" }
    };

    private Dictionary<int, float> stageMultiplierLookup = new()
    {
        { -6, 1f/4f},
        { -5, 2f/7f},
        { -4, 1f/3f},
        { -3, 2f/5f},
        { -2, 1f/2f},
        { -1, 2f/3f},
        { 0, 1},
        { 1, 3f/2f},
        { 2, 2},
        { 3, 5f/2f},
        { 4, 3},
        { 5, 7f/2f},
        { 6, 4}
    };
    private void Awake()
    {
        if (inst == null) inst = this;
        else Destroy(this);
    }

    private void Start()
    {
        runButton.GetComponent<Button>().onClick.AddListener(Run);
        runButton.SetActive(false);
        battleMenu.SetActive(false);
    }

    private void Update()
    {
        if (_enemyPokemon == null) return;
        print(_enemyPokemon.GetComponent<Pokemon>().name + ": " + _enemyPokemon.GetComponent<Health>().GetHealth());
    }

    private void Run()
    {
        if (state != BattleState.Pause) return;
        state = BattleState.Lose;
        StartCoroutine(BattleEnd());
    }

    public void StartBattle(GameObject allyPokemon, GameObject enemyPokemon)
    {
        print(allyPokemon + " : " + enemyPokemon);
        runButton.SetActive(false);
        _allyPokemon = allyPokemon;
        _enemyPokemon = enemyPokemon;
        _allyPokemon.GetComponent<Health>().OnFaint.AddListener(delegate { StartCoroutine(AllyFaint()); });
        _allyPokemon.GetComponent<Pokemon>().OnHit.AddListener(delegate {
            _enemyPokemon.GetComponent<AudioSource>().PlayOneShot(hitSounds[Random.Range(0, hitSounds.Count)]);
            _enemyPokemon.GetComponent<Pokemon>().hitParticleSystem.Play();
        });
        _enemyPokemon.GetComponent<Pokemon>().OnHit.AddListener(delegate {
            _allyPokemon.GetComponent<AudioSource>().PlayOneShot(hitSounds[Random.Range(0, hitSounds.Count)]);
            _allyPokemon.GetComponent<Pokemon>().hitParticleSystem.Play();
        });
        _enemyPokemon.GetComponent<Health>().OnFaint.AddListener(delegate { StartCoroutine(EnemyFaint()); });
        _enemyPokemon.GetComponent<Pokemon>().OnCaptureAttempt.AddListener(CaptureAttempt);
        _enemyPokemon.GetComponent<Pokemon>().OnCapture.AddListener(Capture);
        _enemyPokemon.GetComponent<Pokemon>().OnBreakFree.AddListener(delegate(int count) { StartCoroutine(BreakFree(count)); });
        allyPokemon.GetComponent<Pokemon>().inBattle = true;
        state = BattleState.Start;
        BattlePrep();
    }

    private IEnumerator BreakFree(int count)
    {
        state = BattleState.EnemyTurn;
        switch (count)
        {
            case 0: dialogueText.text = $"Oh, no! The {_enemyPokemon.GetComponent<Pokemon>().name} broke free!"; break;
            case 1: dialogueText.text = "Aww! It appeared to be caught!"; break;
            case 2: dialogueText.text = "Aargh! Almost had it!"; break;
        }
        yield return StartCoroutine(RotatePokemon(_allyPokemon, _enemyPokemon));
        StartCoroutine(EnemyTurn());
    }

    private void Capture()
    {
        state = BattleState.Captured;
        dialogueText.text = $"Gotcha! {_enemyPokemon.GetComponent<Pokemon>().name}  was caught!";
        StartCoroutine(BattleEnd());
    }

    private void CaptureAttempt()
    {
        state = BattleState.AttemptingCapture;
        dialogueText.text = "";
        moveParent.gameObject.SetActive(false);
    }

    private void BattlePrep()
    {
        StartCoroutine(RotatePokemon(_enemyPokemon, _allyPokemon));
        int id = 0;
        foreach (var item in _allyPokemon.GetComponent<Pokemon>().GetMoves())
        {
            var button = Instantiate(buttonPrefab, moveParent);
            button.GetComponent<MoveButton>().nameText.text = item.Name;
            button.GetComponent<MoveButton>().ppText.text = $"{item.PP}/{item.PP}";
            button.GetComponent<Button>().onClick.AddListener(delegate{StartCoroutine(UseMove(item, button.GetComponent<Button>()));});
            id++;
        }
        state = BattleState.PlayerTurn;
        PlayerTurn();
        battleMenu.SetActive(true);
    }

    private void PlayerTurn()
    {
        if(_allyPokemon != null && _allyPokemon.GetComponent<Health>().GetHealth() > 0)
        {
            moveParent.gameObject.SetActive(true);
            dialogueText.text = $"What will {_allyPokemon.GetComponent<Pokemon>().name} do?";
        }
        else
        {
            new WaitForSeconds(timeBetweenDialogues);
            dialogueText.text = $"Run away or release another pokemon";
            state = BattleState.Pause;
            runButton.SetActive(true);
        }
    }

    private IEnumerator EnemyTurn()
    {
        if (state != BattleState.EnemyTurn) yield break;
        yield return new WaitForSeconds(timeBetweenDialogues);
        var enemy = _enemyPokemon.GetComponent<Pokemon>();
        var ally = _allyPokemon.GetComponent<Pokemon>();
        List<PokemonMove> possibleMoves = enemy.GetMoves();
        foreach (var item in enemy.GetMoves())
        {
            if(item.CurrentPP <= 0) possibleMoves.Remove(item);
        }
        PokemonMove move = possibleMoves[Random.Range(0, possibleMoves.Count)];
        move.CurrentPP--;
        dialogueText.text = $"{enemy.name} used {move.Name}";
        if (move.Category == MoveCategory.Physical)
            enemy.animator.SetTrigger("PhysAttack");
        yield return new WaitForSeconds(timeBetweenDialogues);
        if (move.Category == MoveCategory.Physical)
        {
            int damage = CalculateDamage(enemy, _allyPokemon.GetComponent<Pokemon>(), move);
            _allyPokemon.GetComponent<Health>().TakeDamage(damage);
            dialogueText.text = $"{ally.name} took {damage} damage!";
        }
        else if (move.Category == MoveCategory.Status)
        {
            if (move.Status.effect == MoveEffects.Attack || move.Status.effect == MoveEffects.Defense || move.Status.effect == MoveEffects.Special)
            {
                string dialogue = stageChangeLookup[move.Status.stageChange];
                var affectedStat = (Stat)Enum.Parse(typeof(Stat), move.Status.effect.ToString());
                if (move.Status.targetSelf)
                {
                    _enemyPokemon.GetComponent<Pokemon>().Stages[affectedStat] += move.Status.stageChange;
                    _enemyPokemon.GetComponent<Pokemon>().Stages[affectedStat] = Mathf.Clamp(_enemyPokemon.GetComponent<Pokemon>().Stages[affectedStat], -6, 6);
                    dialogue = Regex.Replace(dialogue, @"Pokemon", _enemyPokemon.GetComponent<Pokemon>().name); 
                }
                else 
                {
                    _allyPokemon.GetComponent<Pokemon>().Stages[affectedStat] += move.Status.stageChange;
                    _allyPokemon.GetComponent<Pokemon>().Stages[affectedStat] = Mathf.Clamp(_allyPokemon.GetComponent<Pokemon>().Stages[affectedStat], -6, 6);
                    dialogue = Regex.Replace(stageChangeLookup[move.Status.stageChange], @"Pokemon", _allyPokemon.GetComponent<Pokemon>().name);
                }
                dialogue = Regex.Replace(dialogue, @"stat", affectedStat.ToString().ToLower());
                dialogueText.text = dialogue;

            }
            else
            {
                dialogueText.text = "This move is not yeat implemented";
            }
        }
        yield return new WaitForSeconds(timeBetweenDialogues);
        state = BattleState.PlayerTurn;
        PlayerTurn();
    }

    private IEnumerator UseMove(PokemonMove move, Button button)
    {
        if (state != BattleState.PlayerTurn || _allyPokemon == null) yield break;
        var ally = _allyPokemon.GetComponent<Pokemon>();
        var enemy = _enemyPokemon.GetComponent<Pokemon>();
        dialogueText.text = $"{ally.name} used {move.Name}";
        if (move.Category == MoveCategory.Physical)
        {
            ally.animator.SetTrigger("PhysAttack");
        }
            
        move.CurrentPP--;
        if (move.CurrentPP <= 0) button.interactable = false;
        button.gameObject.GetComponent<MoveButton>().ppText.text = $"{move.CurrentPP}/{move.PP}";
        moveParent.gameObject.SetActive(false);
        yield return new WaitForSeconds(timeBetweenDialogues);
        if (move.Category == MoveCategory.Physical)
        {
            int damage = CalculateDamage(ally, enemy, move);
            _enemyPokemon.GetComponent<Health>().TakeDamage(damage);
            dialogueText.text = $"Move succesfull! {enemy.name} took {damage} damage!";
        }
        else if(move.Category == MoveCategory.Status)
        {
            if (move.Status.effect == MoveEffects.Attack || move.Status.effect == MoveEffects.Defense || move.Status.effect == MoveEffects.Special)
            {
                string dialogue = stageChangeLookup[move.Status.stageChange];
                var affectedStat = (Stat)Enum.Parse(typeof(Stat), move.Status.effect.ToString());
                print(move.Status.targetSelf + "; " + affectedStat);
                if (move.Status.targetSelf)
                {
                    _allyPokemon.GetComponent<Pokemon>().Stages[affectedStat] += move.Status.stageChange;
                    _allyPokemon.GetComponent<Pokemon>().Stages[affectedStat] = Mathf.Clamp(_allyPokemon.GetComponent<Pokemon>().Stages[affectedStat], -6, 6);
                    dialogue = Regex.Replace(dialogue, @"Pokemon", _allyPokemon.GetComponent<Pokemon>().name);
                }
                else
                {
                    _enemyPokemon.GetComponent<Pokemon>().Stages[affectedStat] += move.Status.stageChange;
                    _enemyPokemon.GetComponent<Pokemon>().Stages[affectedStat] = Mathf.Clamp(_enemyPokemon.GetComponent<Pokemon>().Stages[affectedStat], -6, 6);
                    dialogue = Regex.Replace(stageChangeLookup[move.Status.stageChange], @"Pokemon", _enemyPokemon.GetComponent<Pokemon>().name);
                }
                dialogue = Regex.Replace(dialogue, @"stat", affectedStat.ToString().ToLower());
                dialogueText.text = dialogue;

            }
            else
            {
                dialogueText.text = "This move is not yeat implemented";
            }
        }
        
        if (_enemyPokemon.GetComponent<Health>().GetHealth() <= 0) yield break;
        state = BattleState.EnemyTurn;
        StartCoroutine(EnemyTurn());
    }

    private float GetTypeEffectivness(PokemonType ally, PokemonType enemy)
    {
        if(ally == PokemonType.Normal)
        {
            switch (enemy)
            {
                case PokemonType.Normal: return 1;
                case PokemonType.Fighting: return 1;
                case PokemonType.Water: return 1;
            }
        }
        return 1;
    }

    private int CalculateDamage(Pokemon attacker, Pokemon defender, PokemonMove move)
    {
        criticalHitThreshold = Convert.ToByte(attacker.baseStats[Stat.Speed] / 2);
        int critical = Random.Range(0, 255) < criticalHitThreshold ? 2 : 1;
        float stab = attacker.type.Contains(move.Type) ? 1.5f : 1;
        float Type1 = GetTypeEffectivness(move.Type, defender.type[0]);
        float Type2 = defender.type.Count == 2 ? GetTypeEffectivness(move.Type, defender.type[1]) : 1;
        int A = Mathf.FloorToInt(attacker.Stats[Stat.Attack] * stageMultiplierLookup[attacker.Stages[Stat.Attack]]);
        int D = Mathf.FloorToInt(defender.Stats[Stat.Defense] * stageMultiplierLookup[defender.Stages[Stat.Defense]]);
        int damage = Mathf.CeilToInt((((((2 * attacker.GetLevel() * critical) / 5) + 2) * move.Power * (A / D)) / 50 + 2) * stab * Type1 * Type2);
        return damage;
    }

    private IEnumerator AllyFaint()
    {
        yield return new WaitForSeconds(timeBetweenDialogues);
        dialogueText.text = $"{_allyPokemon.GetComponent<Pokemon>().name} fainted!";
        Vector3 startScale = _allyPokemon.transform.localScale;
        float current = 0;
        print("ally faint");
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, faintSpeed * Time.deltaTime);
            _allyPokemon.transform.localScale = Vector3.Lerp(startScale, Vector3.zero, current);
            yield return null;
        }
        var pokeball = Instantiate(pokeballPb, _allyPokemon.transform.position, _allyPokemon.transform.rotation);
        _allyPokemon.GetComponent<Pokemon>().inBattle = false;
        _allyPokemon.transform.SetParent(pokeball.transform);
        pokeball.GetComponent<Pokeball>().SetContainedPokemon(_allyPokemon);
        _allyPokemon.GetComponent<Animator>().enabled = false;
        _allyPokemon.GetComponent<NavMeshAgent>().enabled = false;
        _allyPokemon.GetComponent<Pokemon>().ResetBones();
        _allyPokemon.SetActive(false);
        foreach (var item in Inventory.inst.GetSlots())
        {
            if(item.itemInSlot == null)
            {
                item.InsertItem(pokeball);
                break;
            }
        }
        pokeball.SetActive(false);
        foreach (var item in moveParent.GetComponentsInChildren<Button>())
        {
            Destroy(item.gameObject);
        }
        state = BattleState.PlayerTurn;
        PlayerTurn();
    }

    private IEnumerator EnemyFaint()
    {
        state = BattleState.Win;
        yield return new WaitForSeconds(timeBetweenDialogues);
        Vector3 startScale = _enemyPokemon.transform.localScale;
        float current = 0;
        _enemyPokemon.GetComponent<Pokemon>().OnDeath.Invoke();
        print("enemy faint");
        while(current < 1)
        {
            current = Mathf.MoveTowards(current, 1, faintSpeed * Time.deltaTime);
            _enemyPokemon.transform.localScale = Vector3.Lerp(startScale, Vector3.zero, current);
            yield return null;
        }
        StartCoroutine(BattleEnd());
    }

    private IEnumerator BattleEnd()
    {
        var enemyPokemon = _enemyPokemon.GetComponent<Pokemon>();
        var allyPokemon = _allyPokemon.GetComponent<Pokemon>();
        if (state == BattleState.Win)
        {
            allyPokemon.inBattle = false;
            int exp = enemyPokemon.expYield * enemyPokemon.GetLevel() / 7;
            allyPokemon.GetXP(exp);
            dialogueText.text = $"{enemyPokemon.name} fainted. {allyPokemon.name} gained {exp} experience!";
            _allyPokemon.GetComponent<Health>().OnFaint.RemoveAllListeners();
            allyPokemon.OnHit.RemoveAllListeners();
            Destroy(_enemyPokemon);
            allyPokemon.Battle(false);
            ResetPP(allyPokemon);
            ResetStages(allyPokemon);
        }
        else if(state == BattleState.Lose)
        {
            dialogueText.text = "You lost";
            _allyPokemon.GetComponent<Health>().OnFaint.RemoveAllListeners();
            _enemyPokemon.GetComponent<Health>().OnFaint.RemoveAllListeners();
            enemyPokemon.OnCapture.RemoveAllListeners();
            enemyPokemon.OnCaptureAttempt.RemoveAllListeners();
            enemyPokemon.OnBreakFree.RemoveAllListeners();
            enemyPokemon.OnHit.RemoveAllListeners();
            enemyPokemon.Battle(false);
            enemyPokemon.GetComponent<Health>().Heal(100);
            ResetPP(allyPokemon);
            ResetPP(enemyPokemon);
            ResetStages(allyPokemon);
            ResetStages(enemyPokemon);
            if (enemyPokemon.isOwnedByTrainer) StartCoroutine(PokemonBackToTrainer());
        }
        else if(state == BattleState.Captured)
        {
            _allyPokemon.GetComponent<Health>().OnFaint.RemoveAllListeners();
            allyPokemon.OnHit.RemoveAllListeners();
            _enemyPokemon.GetComponent<Health>().OnFaint.RemoveAllListeners();
            enemyPokemon.OnCapture.RemoveAllListeners();
            enemyPokemon.OnCaptureAttempt.RemoveAllListeners();
            enemyPokemon.OnBreakFree.RemoveAllListeners();
            enemyPokemon.OnHit.RemoveAllListeners();
            allyPokemon.Battle(false);
            enemyPokemon.Battle(false);
            ResetPP(allyPokemon);
            ResetPP(enemyPokemon);
            ResetStages(allyPokemon);
            ResetStages(enemyPokemon);
        }
        yield return new WaitForSeconds(timeBetweenDialogues);
        battleMenu.SetActive(false);
        _enemyPokemon = null;
        _allyPokemon = null;

        foreach (var item in moveParent.GetComponentsInChildren<Button>())
        {
            Destroy(item.gameObject);
        }
    }

    private IEnumerator PokemonBackToTrainer()
    {
        float current = 0f;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, faintSpeed * Time.deltaTime);
            _enemyPokemon.transform.localScale = Vector3.Lerp(Vector3.one, Vector3.zero, current);
            yield return null;
        }
        Destroy(_enemyPokemon);
        _enemyPokemon.GetComponent<Pokemon>().trainerOwner.BackToTrainer();
    }
    private void ResetStages(Pokemon pokemon)
    {
        if (pokemon == null) return;
        foreach (var key in pokemon.Stages.Keys.ToList())
        {
            pokemon.Stages[key] = 0;
        }
    }

    private void ResetPP(Pokemon pokemon)
    {
        foreach (var item in pokemon.GetMoves())
        {
            item.CurrentPP = item.PP;
        }
    }

    private IEnumerator RotatePokemon(GameObject rotatedPokemon, GameObject targetPokemon)
    {
        Quaternion startPokemonRotation = rotatedPokemon.transform.rotation;
        Quaternion targetRotation = Quaternion.LookRotation(targetPokemon.transform.position - rotatedPokemon.transform.position, Vector3.up);
        float _current = 0;
        while (_current < 1)
        {
            _current = Mathf.MoveTowards(_current, 1, rotationSpeed * Time.deltaTime);
            rotatedPokemon.transform.rotation = Quaternion.Slerp(startPokemonRotation, targetRotation, _current);
            yield return null;
        }
    }

    public BattleState GetState()
    {
        return state;
    }

    public GameObject GetAlly()
    {
        return _allyPokemon;
    }

    public GameObject GetEnemy()
    {
        return _enemyPokemon;
    }
}
