using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using static Unity.Burst.Intrinsics.X86;

[System.Serializable]
public class PokemonWeight
{
    public GameObject key;
    public int val;
}
public class PokemonManager : MonoBehaviour
{
    public static PokemonManager inst;
    public int wildPokemonAmount;
    public float spawnRange;
    public List<PokemonWeight> pokemonPrefabs;
    public Terrain terrain;
    private Dictionary<GameObject, int> _pokemonsWeights = new();
    [HideInInspector]
    public List<Pokemon> wildPokemons;

    private void Awake()
    {
        if (inst == null) inst = this;
        else Destroy(this);
    }
    void Start()
    {
        foreach (var item in pokemonPrefabs)
        {
            _pokemonsWeights[item.key] = item.val;
        }
        SpawnPokemons();
    }

    private void SpawnPokemons()
    {
        //activePokemons.RemoveAll(s => s == null);
        int[] weights = _pokemonsWeights.Values.ToArray();
        
        while(wildPokemons.Count < wildPokemonAmount)
        {
            int randomWeight = Random.Range(0, weights.Sum());
            for (int i = 0; i < weights.Length; ++i)
            {
                randomWeight -= weights[i];
                if (randomWeight < 0)
                {
                    /*Vector2 random = Random.insideUnitCircle * spawnRange;
                    Vector3 pos = new Vector3(Player.inst.transform.position.x + random.x, transform.position.y, Player.inst.transform.position.z + random.y);
                    if (Physics.Raycast(pos, Vector3.down, out var hit, Mathf.Infinity, LayerMask.GetMask("Ground")))
                    {
                        pos = hit.point;
                    }
                    var pokemon = Instantiate(_pokemonsWeights.ElementAt(i).Key, pos, Quaternion.Euler(0, Random.Range(0, 359), Random.Range(0, 359))).GetComponent<Pokemon>();
                    int sum = 0;
                    float avg = 1f;
                    if(Player.inst.GetPartyPokemon().Count > 0)
                    {
                        foreach (var item in Player.inst.GetPartyPokemon())
                        {
                            sum += item.GetLevel();
                        }
                        avg = (float)sum / Player.inst.GetPartyPokemon().Count;
                    }
                    avg = Mathf.Floor(avg);
                    int level = (int)(avg > 1f ? Random.Range(avg - 1, avg + 1) : avg);
                    pokemon.SetLevel(level);
                    pokemonCount++;
                    pokemon.OnCapture.AddListener(delegate { pokemonCount--; SpawnPokemons();});
                    pokemon.OnDeath.AddListener(delegate { pokemonCount--; SpawnPokemons(); });
                    break;*/
                    Vector3 pos = new Vector3(terrain.transform.position.x + Random.Range(0, terrain.terrainData.size.x), transform.position.y, terrain.transform.position.z + Random.Range(0, terrain.terrainData.size.z));
                    RaycastHit hit;
                    do
                    {
                        if (Physics.Raycast(pos, Vector3.down, out hit))
                        {
                            pos = hit.point;
                        }
                    }
                    while (hit.transform.CompareTag("Tree"));

                    var pokemon = Instantiate(_pokemonsWeights.ElementAt(i).Key, pos, Quaternion.Euler(0, Random.Range(0, 359), Random.Range(0, 359))).GetComponent<Pokemon>();
                    wildPokemons.Add(pokemon);
                    int sum = 0;
                    float avg = 1f;
                    if (Player.inst.GetPartyPokemon().Count > 0)
                    {
                        foreach (var item in Player.inst.GetPartyPokemon())
                        {
                            sum += item.GetLevel();
                        }
                        avg = (float)sum / Player.inst.GetPartyPokemon().Count;
                    }
                    avg = Mathf.Floor(avg);
                    int level = (int)(avg > 1f ? Random.Range(avg - 1, avg + 1) : avg);
                    pokemon.SetLevel(level);
                    pokemon.OnCapture.AddListener(delegate { SpawnPokemons();});
                    pokemon.OnDeath.AddListener(delegate { SpawnPokemons(); UpdateLevel(); });
                    break;
                }
            }
        }
    }

    public void UpdateLevel()
    {
        if (Player.inst.GetPartyPokemon().Count <= 0) return;
        int sum = 0;
        float avg;
        foreach (var item in Player.inst.GetPartyPokemon())
        {
            sum += item.GetLevel();
        }
        avg = (float)sum / Player.inst.GetPartyPokemon().Count;
        avg = Mathf.Floor(avg);

        foreach (var pokemon in wildPokemons)
        {
            int level = (int)(avg > 1f ? Random.Range(avg - 1, avg + 1) : avg);
            pokemon.SetLevel(level);
        }
    }
}
