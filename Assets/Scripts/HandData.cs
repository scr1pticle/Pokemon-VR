using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandData : MonoBehaviour
{
    public enum HandModelType { Left, Right}

    public HandData deriveFrom;
    public HandModelType handType;
    public Transform root;
    public Transform[] fingerBones;
    [HideInInspector]
    public Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }
}
