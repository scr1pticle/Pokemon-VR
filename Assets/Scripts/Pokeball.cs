using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using Random = UnityEngine.Random;
using DG.Tweening;
using UnityEngine.AI;
using Unity.VisualScripting;
using UnityEngine.Events;

public enum PokeballType
{
    RegularBall,
    PremierBall,
    GreatBall,
    MasterBall,
    UltraBall
}

public struct PokeballProperties
{
    public int catchRate;
    public Sprite pokeballBot;
    public Sprite pokeballUp;
}

[RequireComponent(typeof(LineRenderer))]
public class Pokeball : MonoBehaviour
{
    public bool instaCatch = false; //SITA ISTRINT REIKES
    [Header("Pokeball")]
    public int catchRate;
    [Header("Pokeball Hit Animation")]
    public float animHeight = 2;
    public float animSpeed = 3;
    public AnimationCurve curve;
    public Transform pokeballTop;
    [Header("Capture Animation")]
    public float pokemonCaptureSpeed = 2;
    public float laserDeploySpeed = 2;
    public float shakeDuration = 0.7f;
    public float intervalBetweenShakes = 1.5f;
    public float pokemonReleaseSpeed = 2;
    [HideInInspector]
    public bool isContainingPokemon = false;
    [Header("Slot")]
    public bool inSlot;
    public Slot currentSlot;

    public float retrieveRange;

    public float battleStartRadius;
    [Header("Effects")]
    public ParticleSystem catchVFX;
    [Header("Audio")]
    public AudioClip shakeCheckSound;
    public AudioClip pickUpSound;
    public AudioClip pokemonCaughtSound;
    public AudioClip catchingPokemon;
    public AudioClip pokemonBreakFree;
    public AudioClip pokemonReturn;
    private AudioSource _audio;

    private bool active = true;
    private Rigidbody rb;
    private Vector3 targetPos;
    private Quaternion targetRot;
    private GameObject pokemon;
    private LineRenderer laser;
    private Vector3 startPokemonScale;

    private GameObject containedPokemon = null;

    private XRGrabInteractable interactable;

    private GameObject enemyPokemon = null;

    private Dictionary<Vector2, int> lookupB = new();

    public GameObject startContainedPokemon;

    void Start()
    {
        _audio = GetComponent<AudioSource>();
        SetupLookupB();
        rb = GetComponent<Rigidbody>();
        laser = GetComponent<LineRenderer>();
        laser.enabled = false;
        interactable = GetComponent<XRGrabInteractable>();
        interactable.selectEntered.AddListener(GrabBegin);
        //if (startContainedPokemon != null) SetStartPokemon();
    }

    public void SetStartPokemon()
    {
        containedPokemon = Instantiate(startContainedPokemon, transform.position, transform.rotation, transform);
        isContainingPokemon = true;
        containedPokemon.GetComponent<Animator>().enabled = false;
        containedPokemon.GetComponent<NavMeshAgent>().enabled = false;
        containedPokemon.GetComponent<Pokemon>().ResetBones();
        startPokemonScale = containedPokemon.transform.localScale;
        containedPokemon.transform.localScale = Vector3.zero;
        containedPokemon.SetActive(false);
    }

    public void SetStartPokemon(GameObject pokemonPb)
    {
        containedPokemon = Instantiate(pokemonPb, transform.position, transform.rotation, transform);
        isContainingPokemon = true;
        containedPokemon.GetComponent<Animator>().enabled = false;
        containedPokemon.GetComponent<NavMeshAgent>().enabled = false;
        containedPokemon.GetComponent<Pokemon>().ResetBones();
        startPokemonScale = containedPokemon.transform.localScale;
        containedPokemon.transform.localScale = Vector3.zero;
        containedPokemon.SetActive(false);

    }
    public void SetStartPokemon(GameObject pokemonPb, Trainer trainer)
    {
        containedPokemon = Instantiate(pokemonPb, transform.position, transform.rotation, transform);
        isContainingPokemon = true;
        containedPokemon.GetComponent<Animator>().enabled = false;
        containedPokemon.GetComponent<NavMeshAgent>().enabled = false;
        containedPokemon.GetComponent<Pokemon>().ResetBones();
        startPokemonScale = containedPokemon.transform.localScale;
        containedPokemon.transform.localScale = Vector3.zero;
        containedPokemon.GetComponent<Pokemon>().trainerOwner = trainer;
        containedPokemon.SetActive(false);
       
    }

    public void RetrievePokemon()
    {
        if (Physics.Raycast(transform.position, transform.forward, out var hit, retrieveRange))
        {
            if (hit.transform.CompareTag("Pokemon"))
            {
                if (!hit.transform.root.GetComponent<Pokemon>().isOwned || isContainingPokemon || hit.transform.root.GetComponent<Pokemon>().inBattle) return;
                pokemon = hit.transform.root.GetComponent<Pokemon>().gameObject;
                _audio.PlayOneShot(pokemonReturn);
                StartCoroutine(CapturePokemon(true));
            }
        }
    }

    private IEnumerator OpenPokeball()
    {
        float current = 0;
        Quaternion starRot = transform.rotation;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, animSpeed * Time.deltaTime);
            pokeballTop.transform.localRotation = Quaternion.Lerp(Quaternion.identity, Quaternion.Euler(-75, 0, 0), current);
            yield return null;
        }
    }

    public void GrabBegin(SelectEnterEventArgs arg)
    {
        _audio.PlayOneShot(pickUpSound);
        if (inSlot)
        {
            foreach (var item in GetComponentsInChildren<SkinnedMeshRenderer>())
            {
                item.enabled = true;
            }
            containedPokemon.GetComponent<Pokemon>().UI.SetActive(true);
            containedPokemon.SetActive(false);
            containedPokemon.transform.localScale = Vector3.zero;
            currentSlot.GetComponent<Slot>().itemInSlot = null;
            inSlot = false;
            currentSlot.ResetColor();
            currentSlot = null;
        }
        rb.constraints = RigidbodyConstraints.None;
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (!isContainingPokemon)
        {
            if (collision.transform.CompareTag("Ground"))
            {
                if(!instaCatch)
                active = false;
                if (containedPokemon != null)
                {
                    int a = CalculateA();
                    if (instaCatch) a = 255;
                    int rand = Random.Range(0, 256);
                    if (rand <= a)
                    {
                        StartCoroutine(DelayedPokemonCapture());
                    }
                    else
                    {
                        StartCoroutine(Shake(a));
                    }
                }
                else if(!instaCatch)
                {
                    StartCoroutine(SelfDestruct());
                }
            }
            if (collision.transform.CompareTag("Pokemon") && active)
            {
                pokemon = collision.transform.root.GetComponent<Pokemon>().gameObject;
                if (pokemon.GetComponent<Pokemon>().isOwned)
                { 
                    pokemon = null; 
                    return; 
                }
                if ((!pokemon.GetComponent<Pokemon>().inBattle && pokemon.GetComponent<Pokemon>().isCatchable) || (BattleSystem.inst.GetState() == BattleState.PlayerTurn && !pokemon.GetComponent<Pokemon>().isCatchable))
                {
                    rb.isKinematic = true;
                    targetPos = collision.GetContact(0).point + new Vector3(collision.GetContact(0).normal.x * animHeight, Mathf.Clamp(Mathf.Abs(collision.GetContact(0).normal.x), 0.5f, 1f) * animHeight, collision.GetContact(0).normal.y * animHeight);
                    targetRot = Quaternion.LookRotation(collision.transform.position - targetPos, Vector3.up);
                    pokemon.GetComponent<Pokemon>().OnCaptureAttempt.Invoke();
                    _audio.PlayOneShot(catchingPokemon);
                    interactable.enabled = false;
                    StartCoroutine(Animate());
                }
            }
        }
        else
        {
            if (collision.transform.CompareTag("Ground") && !inSlot)
            {
                if(containedPokemon.GetComponent<Health>().GetHealth() <= 0 && containedPokemon.GetComponent<Pokemon>().isOwned)
                {
                    foreach (var item in Inventory.inst.GetSlots())
                    {
                        if (item.itemInSlot == null)
                        {
                            item.InsertItem(gameObject);
                            gameObject.SetActive(false);
                            return;
                        }
                    }
                }
                
                var pokemonInRange = Physics.OverlapSphere(transform.position, battleStartRadius);
                DebugExtension.DebugWireSphere(transform.position, battleStartRadius, 10);
                if (pokemonInRange.Length > 0)
                {
                    do
                    {
                        float closestDistance = Mathf.Infinity;
                        foreach (var item in pokemonInRange)
                        {
                            if (!item.transform.CompareTag("Pokemon")) continue;
                            if (item.transform.root.GetComponent<Pokemon>() == null) continue;
                            if (item.transform.root.transform == containedPokemon.transform) continue;  
                            var distance = Vector3.Distance(transform.position, item.transform.position);
                            if (distance < closestDistance)
                            {
                                closestDistance = distance;
                                enemyPokemon = item.transform.root.gameObject;
                            }
                        }
                        if (enemyPokemon == null || enemyPokemon.GetComponent<Pokemon>().isOwned) break;
                        if (!enemyPokemon.GetComponent<Pokemon>().inBattle || BattleSystem.inst.GetState() == BattleState.Pause)
                        {
                            BattleSystem.inst.StartBattle(containedPokemon, enemyPokemon);
                            enemyPokemon.GetComponent<Pokemon>().Battle();
                            containedPokemon.GetComponent<Pokemon>().Battle();
                        }
                    } while (false);
                }
                print("releasing");
                StartCoroutine(ReleasePokemon());
            }
        }
    }

    private IEnumerator DelayedPokemonCapture()
    {
        yield return new WaitForSeconds(intervalBetweenShakes);
        containedPokemon.GetComponent<Pokemon>().isOwned = true;
        containedPokemon.SetActive(false);
        isContainingPokemon = true;
        _audio.PlayOneShot(pokemonCaughtSound);
        catchVFX.Play();
        containedPokemon.GetComponent<Pokemon>().OnCapture.Invoke();
        interactable.enabled = true;
    }

    private IEnumerator SelfDestruct()
    {
        interactable.enabled = false;
        yield return new WaitForSeconds(5);
        var current = 1f;
        while(current > 0) 
        {
            current = Mathf.MoveTowards(current, 0, 2*Time.deltaTime);
            transform.localScale = new Vector3(current, current, current);
            yield return null;
        }
        Destroy(gameObject);
    }
    private void BreakFree(int count)
    {
        pokemon.GetComponent<Pokemon>().OnBreakFree.Invoke(count);
        StartCoroutine(ReleasePokemon());
    }

    private bool ShakeCheck(int b)
    {
        int rand = Random.Range(0, 256);
        if (rand >= b)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }

    private IEnumerator Shake(int a)
    {
        yield return new WaitForSeconds(intervalBetweenShakes);
        int b = 0;
        foreach (var item in lookupB.Keys)
        {
            if (a >= item.x && a <= item.y) { b = lookupB[item]; }
        }
        for (int i = 0; i < 3; i++)
        {
            if (!ShakeCheck(b))
            {
                BreakFree(i);
                yield break;
            }
            else
            {
                _audio.PlayOneShot(shakeCheckSound);
                yield return transform.DOShakeRotation(shakeDuration, new Vector3(20, 40, 20), 10, 90, true, ShakeRandomnessMode.Full).WaitForCompletion();
                yield return new WaitForSeconds(intervalBetweenShakes);
            }
        }
        pokemon.GetComponent<Pokemon>().isOwned = true;
        pokemon.SetActive(false);
        isContainingPokemon = true;
        _audio.PlayOneShot(pokemonCaughtSound);
        catchVFX.Play();
        pokemon.GetComponent<Pokemon>().OnCapture.Invoke();
        interactable.enabled = true;
    }

    private IEnumerator Animate()
    {
        float current = 0;
        Vector3 startPos = transform.position;
        Quaternion starRot = transform.rotation;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, animSpeed * Time.deltaTime);
            transform.SetPositionAndRotation(Vector3.Lerp(startPos, targetPos, curve.Evaluate(current)), Quaternion.Lerp(starRot, targetRot, curve.Evaluate(current)));
            pokeballTop.transform.localRotation = Quaternion.Lerp(Quaternion.identity, Quaternion.Euler(-75, 0, 0), current);
            yield return null;
        }
        StartCoroutine(CapturePokemon());
    }

    private IEnumerator CapturePokemon(bool retrieve = false)
    {
        float current = 0;
        laser.enabled = true;
        pokemon.GetComponent<Pokemon>().SetIdleAnimation();
        laser.SetPosition(0, transform.position);
        laser.SetPosition(1, transform.position);
        while (laser.GetPosition(1) != pokemon.transform.position)
        {
            current = Mathf.MoveTowards(current, 1, laserDeploySpeed * Time.deltaTime);
            laser.SetPosition(1, Vector3.Lerp(laser.GetPosition(1), pokemon.transform.position, current));
            laser.SetPosition(0, transform.position);
            yield return null;
        }

        current = 0;
        var startPos = pokemon.transform.position;
        startPokemonScale = pokemon.transform.localScale;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, pokemonCaptureSpeed * Time.deltaTime);
            pokemon.transform.position = Vector3.Lerp(startPos, transform.position, current);
            pokemon.transform.localScale = Vector3.Lerp(startPokemonScale, Vector3.zero, current);
            if(!retrieve)
                pokeballTop.transform.localRotation = Quaternion.Lerp(Quaternion.Euler(-75, 0, 0), Quaternion.identity, current);
            laser.SetPosition(1, pokemon.transform.position);
            laser.SetPosition(0, transform.position);
            yield return null;
        }
        
        laser.enabled = false;
        pokemon.transform.parent = transform;
        pokemon.transform.localPosition = Vector3.zero;
        pokemon.transform.forward = transform.forward;
        pokemon.transform.localRotation = Quaternion.identity;
        containedPokemon = pokemon;
        if (pokemon.GetComponent<Pokemon>().animator != null)
            pokemon.GetComponent<Animator>().enabled = false;
        pokemon.GetComponent<NavMeshAgent>().enabled = false;
        pokemon.GetComponent<Pokemon>().ResetBones();
        if (retrieve)
        {
            containedPokemon.GetComponent<Pokemon>().OnRetrieve.Invoke();
            isContainingPokemon = true;
            yield break;
        }
        var player = GameObject.FindGameObjectWithTag("Player").transform.position;
        transform.LookAt(new Vector3(player.x, transform.position.y, player.z));
        rb.freezeRotation = true;
        rb.constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionZ | RigidbodyConstraints.FreezeRotation;
        rb.isKinematic = false;

    }

    private IEnumerator ReleasePokemon()
    {
        print("called release");
        _audio.PlayOneShot(pokemonBreakFree);
        containedPokemon.transform.parent = null;
        containedPokemon.GetComponent<Pokemon>().OnRelease.Invoke();
        transform.GetComponent<Collider>().enabled = false;
        if(Physics.Raycast(containedPokemon.transform.position, Vector3.down, out var hit))
        {
            if (hit.transform.CompareTag("Ground"))
            {
                containedPokemon.transform.position = hit.point;
            }
        }
        var player = GameObject.FindGameObjectWithTag("Player").transform.position;
        if (!containedPokemon.GetComponent<Pokemon>().inBattle)
            containedPokemon.transform.LookAt(new Vector3(player.x, transform.position.y, player.z));
        else
        {
            GameObject look = null;
            look = ReferenceEquals(containedPokemon, BattleSystem.inst.GetAlly()) ? BattleSystem.inst.GetEnemy() : BattleSystem.inst.GetAlly();

            containedPokemon.transform.LookAt(new Vector3(look.transform.position.x, transform.position.y, look.transform.position.z));
        }
        containedPokemon.SetActive(true);
        containedPokemon.GetComponent<Pokemon>().releaseParticleSystem.Play();
        containedPokemon.GetComponent<AudioSource>().PlayOneShot(containedPokemon.GetComponent<Pokemon>().releaseSound);
        var current = 0f;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, pokemonReleaseSpeed * Time.deltaTime);
            containedPokemon.transform.localScale = Vector3.Lerp(Vector3.zero, startPokemonScale, current);
            yield return null;
        }
        if(containedPokemon.GetComponent<Pokemon>().animator != null) 
        {
            containedPokemon.GetComponent<Animator>().enabled = true;
        }
        containedPokemon.GetComponent<Pokemon>().SetIdleAnimation(false);
        containedPokemon.GetComponent<NavMeshAgent>().enabled = !containedPokemon.GetComponent<Pokemon>().inBattle;
        print("released");
        Destroy(gameObject);
    }

    private int CalculateA()
    {
        Health health = containedPokemon.GetComponent<Health>();
        int HPmax = health.GetMaxHealth();
        int HPcurrent = health.GetHealth();
        int rateModified = Mathf.Clamp(containedPokemon.GetComponent<Pokemon>().catchRate * catchRate, 1, 255);
        var a = ((3 * HPmax - 2 * HPcurrent) * rateModified) / (3 * HPmax);
        if (a < 1) a = 1;
        a = Mathf.Clamp(a, 0, 255);
        return a;
    }

    public void SetContainedPokemon(GameObject pokemon)
    {
        containedPokemon = pokemon;
        isContainingPokemon = true;
    }
    public GameObject GetContainedPokemon()
    {
        return containedPokemon;
    }

    public void Release()
    {
        transform.rotation = transform.parent.transform.rotation;
        transform.parent = null;
        rb.useGravity = true;
        rb.AddForce(transform.forward * 200);
    }

    private void SetupLookupB()
    {
        lookupB.Add(new Vector2(0, 1), 63);
        lookupB.Add(new Vector2(2, 2), 75);
        lookupB.Add(new Vector2(3, 3), 84);
        lookupB.Add(new Vector2(4, 4), 90);
        lookupB.Add(new Vector2(5, 5), 95);
        lookupB.Add(new Vector2(6, 7), 103);
        lookupB.Add(new Vector2(8, 10), 113);
        lookupB.Add(new Vector2(11, 15), 126);
        lookupB.Add(new Vector2(16, 20), 134);
        lookupB.Add(new Vector2(21, 30), 149);
        lookupB.Add(new Vector2(31, 40), 160);
        lookupB.Add(new Vector2(41, 50), 169);
        lookupB.Add(new Vector2(51, 60), 177);
        lookupB.Add(new Vector2(61, 80), 191);
        lookupB.Add(new Vector2(81, 100), 201);
        lookupB.Add(new Vector2(101, 120), 211);
        lookupB.Add(new Vector2(121, 140), 220);
        lookupB.Add(new Vector2(141, 160), 227);
        lookupB.Add(new Vector2(161, 180), 234);
        lookupB.Add(new Vector2(181, 200), 240);
        lookupB.Add(new Vector2(201, 220), 246);
        lookupB.Add(new Vector2(221, 240), 251);
        lookupB.Add(new Vector2(241, 254), 253);
        lookupB.Add(new Vector2(255, 255), 255);
    }
}
