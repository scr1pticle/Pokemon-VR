using System;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;
using Random = UnityEngine.Random;

public enum pokemonAnimState
{
    EndlessIdle,
    InBattle,
    Idle,
    Walking
}
public enum PokemonType
{
    Bug,
    Dark,
    Dragon,
    Electric,
    Fairy,
    Fighting,
    Fire,
    Flying,
    Ghost,
    Grass,
    Ground,
    Ice,
    Normal,
    Poison,
    Psychic,
    Rock,
    Steel,
    Water

}

public enum Stat
{
    Attack,
    Defense,
    Speed,
    hp,
    Special,
}
[Serializable]
public class baseStatsInspector
{
    public Stat key;
    public int val;
}

[RequireComponent(typeof(AudioSource))]
public class Pokemon : MonoBehaviour
{
    [Header("Pokemon stats")]
    public string name;
    public List<PokemonType> type;
    public List<baseStatsInspector> baseStatsInspector;
    public int catchRate;
    public int expYield;
    private int exp = 0;
    private int nextLevelExp = 0;

    [Header("VFX")]
    public ParticleSystem hitParticleSystem;
    public ParticleSystem releaseParticleSystem;
    public Dictionary<Stat, int> Stats { get; private set; } = new();

    public Dictionary<Stat, int> baseStats = new();
    private Dictionary<Stat, int> IVs = new();
    private Dictionary<Stat, int> EVs = new();

    public Dictionary<Stat, int> Stages = new();

    public List<PokemonMoveEnum> movesEnum;
    [Header("Animation Settings")]
    public Vector2 walkInterval = new Vector2(5f, 8f);
    public float playerFollowDistance = 1.5f;
    public float playerStoppingDistance = 0.6f;
    [HideInInspector]
    public AudioSource audio;
    [Header("Audio")]
    public AudioClip releaseSound;

    private float _timer = 0;
    public Transform boneOrigin;
    private List<Transform> _bones = new();
    private List<Vector3> _boneStartPosition = new();
    private List<Quaternion> _boneStartRotation = new();

    public int startLevel = 1;
    private int _level = 1;

    private List<PokemonMove> moves = new();

    public bool isOwned = false;
    public bool isOwnedByTrainer = false;
    public Trainer trainerOwner;
    public bool inBattle = false;

    public UnityEvent OnCaptureAttempt;
    public UnityEvent OnCapture;
    public UnityEvent<int> OnBreakFree;
    public UnityEvent OnHit;

    public UnityEvent OnRetrieve;
    public UnityEvent OnRelease;

    public UnityEvent OnDeath;

    public GameObject UI;
    public GameObject expScale;

    public bool isCatchable = false;

    public TextMeshProUGUI lvlText;

    public Animator animator;
    private NavMeshAgent _agent;
    private GameObject _player;

    public bool alwaysIdle;

    [HideInInspector]
    public pokemonAnimState animationState;

    private void Awake()
    {
        GenerateIVs();
        GenerateEVs();
        foreach (var item in (Stat[])Enum.GetValues(typeof(Stat)))
        {
            Stats.Add(item, 0);
            Stages.Add(item, 0);
        }
        foreach (var item in baseStatsInspector)
        {
            baseStats.Add(item.key, item.val);
        }
        _agent = GetComponent<NavMeshAgent>();
    }
    private void Start()
    {
        audio = GetComponent<AudioSource>();
        OnCapture.AddListener(Caught);
        _timer = Random.Range(walkInterval.x, walkInterval.y);
        foreach (var item in boneOrigin.GetComponentsInChildren<Transform>())
        {
            _bones.Add(item);
            _boneStartPosition.Add(item.localPosition);
            _boneStartRotation.Add(item.localRotation);
        }
        animationState = pokemonAnimState.Idle;
        _player = GameObject.FindGameObjectWithTag("Player");
        for (int i = 0; i < movesEnum.Count; i++)
        {
            Type type = Type.GetType(movesEnum[i].ToString());
            moves.Add((PokemonMove)Activator.CreateInstance(type));
            moves[i].CurrentPP = moves[i].PP;
        }
        _level = startLevel;
        lvlText.text =  $"Lvl {_level}";
        nextLevelExp = 6;
        
        CalculateStats();
    }

    public void Hit()
    {
        OnHit.Invoke();
    }

    private void Caught()
    {
        Player.inst.AddPokemon(this);
        PokemonManager.inst.wildPokemons.Remove(this);
    }

    private void OnDestroy()
    {
        PokemonManager.inst.wildPokemons.Remove(this);
    }

    private void Update()
    {
        if(animator == null)
        {
            switch (animationState)
            {
                case pokemonAnimState.Idle: Idle(); break;
                case pokemonAnimState.Walking: Walking(); break;
            }
            return;
        }
        if (!animator.enabled || !animator.gameObject.activeSelf) return;
        switch (animationState)
        {
            case pokemonAnimState.Idle: Idle(); break;
            case pokemonAnimState.Walking: Walking(); break;
        }
    }
    private void Idle()
    {
        if (alwaysIdle) return;
        if (isOwned)
        {
            print("yes");
            if (Vector3.Distance(transform.position, _player.transform.position) > playerFollowDistance && !_agent.hasPath)
            {
                if (!_agent.isOnNavMesh) return;
                animationState = pokemonAnimState.Walking;
                if(animator != null)
                {
                    animator.SetBool("isIdle", false);
                    animator.SetBool("isWalking", true);
                }
                _agent.SetDestination(_player.transform.position);
            }
        }
        else
        {
            if(Time.time >= _timer)
            {
                if (!_agent.isOnNavMesh) return;
                animationState = pokemonAnimState.Walking;
                if(animator != null)
                {
                    animator.SetBool("isIdle", false);
                    animator.SetBool("isWalking", true);
                }
                
                do
                {
                    _agent.SetDestination(new Vector3(transform.position.x + Random.Range(-2, 2), 0, transform.position.z + Random.Range(-2, 2)));
                }
                while (_agent.path.status == NavMeshPathStatus.PathPartial);
            }
        }
    }
    private void Walking()
    {
        if (alwaysIdle) {
            animationState = pokemonAnimState.Idle;
            if(animator != null)
            {
                animator.SetBool("isWalking", false);
                animator.SetBool("isIdle", true);
            }
            return;
        }
        if (isOwned)
        {
            if (Vector3.Distance(_player.transform.position, transform.position) > playerStoppingDistance)
            {
                if (_player.transform.position == _agent.destination || !_agent.isOnNavMesh) return;
                _agent.SetDestination(_player.transform.position);
            }
            else if(animator == null || animator.enabled)
            {
                _agent.ResetPath();
                animationState = pokemonAnimState.Idle;
                if(animator != null)
                {
                    animator.SetBool("isWalking", false);
                    animator.SetBool("isIdle", true);
                }
                
            }
        }
        else
        {
            if (!_agent.hasPath)
            { 
                animationState = pokemonAnimState.Idle;
                if(animator != null)
                {
                    animator.SetBool("isWalking", false);
                    animator.SetBool("isIdle", true);
                }
                
                _timer = Time.time + Random.Range(walkInterval.x, walkInterval.y);
            }
        }
    }
    public void SetIdleAnimation(bool state = true)
    {
        _agent.enabled = !state;
        if(state)
            animationState = pokemonAnimState.EndlessIdle;
        else 
            animationState = pokemonAnimState.Idle;
        if(animator != null)
        {
            animator.SetBool("isIdle", true);
            animator.SetBool("isWalking", false);
        }
    }
    public void ResetBones()
    {
        for (int i = 0; i < _bones.Count; i++)
        {
            _bones[i].localPosition = _boneStartPosition[i];
            _bones[i].localRotation = _boneStartRotation[i];
        }
    }

    public void Battle(bool battle = true)
    {
        inBattle = battle;
        if (battle)
        {
            animationState = pokemonAnimState.InBattle;
            _agent.enabled = false;
            if(animator != null)
            {
                animator.SetBool("isIdle", true);
                animator.SetBool("isWalking", false);
            }
            
        }
        else if(gameObject.activeSelf)
        {
            animationState = pokemonAnimState.Idle;
            _agent.enabled = true;
            if (!isOwned) _timer = Time.deltaTime + Random.Range(walkInterval.x, walkInterval.y);
        }
    }
    public void CalculateStats()
    {
        
        foreach (var item in (Stat[])Enum.GetValues(typeof(Stat)))
        {
            int e = Mathf.FloorToInt(Mathf.Min(255, Mathf.Ceil(Mathf.Sqrt(EVs[item]))) / 4);
            if(item != Stat.hp)
                Stats[item] = Mathf.FloorToInt((2 * baseStats[item] + IVs[item] + e) * _level / 100 + 5);
            else
                Stats[item] = Mathf.FloorToInt((2 * baseStats[item] + IVs[item] + e) * _level / 100 + _level + 10);
        }
        GetComponent<Health>().SetHealth(Stats[Stat.hp]);
    }

    private void GenerateIVs()
    {
        foreach (var item in (Stat[])Enum.GetValues(typeof(Stat)))
        {
            IVs.Add(item, Random.Range(0, 16));
        }

        int x = 0;
        if (IVs[Stat.Attack] % 2 == 0) x += 8;
        if (IVs[Stat.Defense] % 2 == 0) x += 4;
        if (IVs[Stat.Speed] % 2 == 0) x += 2;
        if (IVs[Stat.Special] % 2 == 0) x += 1;

        IVs[Stat.hp] = x;
    }

    private void GenerateEVs()
    {
        foreach (var item in (Stat[])Enum.GetValues(typeof(Stat)))
        {
            EVs.Add(item, 0);
        }
    }

    public void GetXP(int exp)
    {
        
        this.exp += exp;
        while(this.exp >= nextLevelExp)
        {
            _level++;
            nextLevelExp = Mathf.CeilToInt(4f * (Mathf.Pow(_level, 3) / 5f));
        }
        UpdateLevel();
        PokemonManager.inst.UpdateLevel();
        CalculateStats();
    }

    public void SetLevel(int level)
    {
        _level = level;
        exp = Mathf.CeilToInt(4f * (Mathf.Pow(_level-1, 3) / 5f));
        nextLevelExp = Mathf.CeilToInt(4f * (Mathf.Pow(_level, 3) / 5f));
        UpdateLevel();
        CalculateStats();
    }
    
    private void UpdateLevel()
    {
        lvlText.text = $"Lvl {_level}";
        expScale.transform.localScale = new Vector3(Mathf.Clamp01((float)exp/nextLevelExp), 1, 1);
    }
    public List<PokemonMove> GetMoves()
    {
        return moves;
    }

    public int GetLevel()
    {
        return _level;
    }
}
