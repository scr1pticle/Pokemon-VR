using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class GrabHandPos : MonoBehaviour
{
    public HandData rightHandPose;

    private Vector3 startHandPos;
    private Vector3 finalHandPos;

    private Quaternion startHandRotation;
    private Quaternion finalHandRotation;

    private Quaternion[] startFingerRotations;
    private Quaternion[] finalFingerRotations;

    void Start()
    {
        XRGrabInteractable grabInteractable = GetComponent<XRGrabInteractable>();

        grabInteractable.selectEntered.AddListener(SetupPose);
        grabInteractable.selectExited.AddListener(UnsetPose);

        rightHandPose.gameObject.SetActive(false);
    }

    public void SetupPose(BaseInteractionEventArgs arg)
    {
        if(arg.interactorObject is XRDirectInteractor)
        {
            HandData handData = arg.interactorObject.transform.GetComponentInChildren<HandData>();
            handData.animator.enabled = false;
            SetHandDataValues(handData, rightHandPose);
            SetHandData(handData, finalHandPos, finalHandRotation, finalFingerRotations);
        }
        else if(arg.interactorObject is XRRayInteractor)
        {
            HandData handData = arg.interactorObject.transform.parent.GetComponentInChildren<HandData>();
            handData.animator.enabled = false;
            SetHandDataValues(handData, rightHandPose);
            SetHandData(handData, finalHandPos, finalHandRotation, finalFingerRotations);
        }
    }

    public void UnsetPose(BaseInteractionEventArgs arg)
    {
        if (arg.interactorObject is XRDirectInteractor)
        {
            HandData handData = arg.interactorObject.transform.GetComponentInChildren<HandData>();
            handData.animator.enabled = true;

            SetHandData(handData, startHandPos, startHandRotation, startFingerRotations);
        }
        else if (arg.interactorObject is XRRayInteractor)
        {
            HandData handData = arg.interactorObject.transform.parent.GetComponentInChildren<HandData>();
            handData.animator.enabled = false;
            SetHandDataValues(handData, rightHandPose);
            SetHandData(handData, finalHandPos, finalHandRotation, finalFingerRotations);
        }
    }

    public void SetHandDataValues(HandData h1, HandData h2)
    {
        startHandPos = h1.root.localPosition;
        finalHandPos = h2.root.localPosition;

        startHandRotation = h1.root.localRotation;
        finalHandRotation = h1.root.localRotation;

        startFingerRotations = new Quaternion[h1.fingerBones.Length];
        finalFingerRotations = new Quaternion[h1.fingerBones.Length];

        for (int i = 0; i < h1.fingerBones.Length; i++)
        {
            startFingerRotations[i] = h1.fingerBones[i].localRotation;
            finalFingerRotations[i] = h2.fingerBones[i].localRotation;
        }
    }

    public void SetHandData(HandData h, Vector3 newPosition, Quaternion newRotation, Quaternion[] newBonesRotation)
    {
        //h.root.localPosition = newPosition;
        h.root.localRotation = newRotation;

        for (int i = 0; i < newBonesRotation.Length; i++)
        {
            h.fingerBones[i].localRotation = newBonesRotation[i];
        }
    }
}
