using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class BlinkingText : MonoBehaviour
{
    public float blinkInterval = 1f;
    public TextMeshProUGUI tmpro;

    private Color transparent = new Color(0, 0, 0, 0);
    private void OnEnable()
    {
        StartCoroutine(Blinking());
    }
    private IEnumerator Blinking()
    {
        while (true) {
            yield return new WaitForSeconds(blinkInterval);
            tmpro.enabled = !tmpro.enabled;
            if (tmpro.color == transparent)
                tmpro.color = Color.white;
            else
                tmpro.color = transparent;
        }
        
    }
}
