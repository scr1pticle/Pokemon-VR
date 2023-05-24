using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class Health : MonoBehaviour
{
    public GameObject Healthbar;
    public TextMeshProUGUI HealthText;
    public float animSpeed = 2;

    private int _health;
    private int maxHealth;

    public UnityEvent OnFaint;

    public void SetHealth(int hp)
    {
        maxHealth = _health = hp;
        UpdateHealthbar();
    }
    public void TakeDamage(int dmg)
    {
        _health -= dmg;
        if(_health <= 0)
        {
            _health = 0;
            OnFaint.Invoke();
        }
        UpdateHealthbar();
    }

    public void Heal(int hpPercent)
    {
        _health += Mathf.RoundToInt(maxHealth*(float)(hpPercent/100));
        _health = Mathf.Clamp(_health, 0, maxHealth);
        UpdateHealthbar();
    }

    public int GetHealth()
    {
        return _health;
    }

    public int GetMaxHealth()
    {
        return maxHealth;
    }
    private void UpdateHealthbar()
    {
        float x = Mathf.Clamp01((float)_health / maxHealth);
        Healthbar.transform.localScale = new Vector3(x, 1, 1);
        HealthText.text = $"{_health}/{maxHealth}";
    }
}
