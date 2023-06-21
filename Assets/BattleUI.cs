using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleUI : MonoBehaviour
{
    public float yoffset;
    public float zoffset;

    private Vector3 startPos;
    private void Start()
    {
        startPos = transform.localPosition;
    }
    private void OnEnable()
    {
        transform.localPosition = new(startPos.x, Camera.main.transform.position.y - yoffset, zoffset);
    }
}
