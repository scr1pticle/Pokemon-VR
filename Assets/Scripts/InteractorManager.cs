using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class InteractorManager : MonoBehaviour
{
    public XRDirectInteractor rightDirectInteractor;
    public XRDirectInteractor leftDirectInteractor;

    public XRRayInteractor rightGrabRayInteractor;
    public XRRayInteractor leftGrabRayInteractor;

    public XRRayInteractor rightUIRayInteractor;
    public XRRayInteractor leftUIRayInteractor;

    private void Start()
    {
        rightDirectInteractor.selectEntered.AddListener(delegate { rightGrabRayInteractor.enabled = false; rightUIRayInteractor.enabled = false; });
        rightDirectInteractor.selectExited.AddListener(delegate { rightGrabRayInteractor.enabled = true; rightUIRayInteractor.enabled = true; });

        leftDirectInteractor.selectEntered.AddListener(delegate { leftGrabRayInteractor.enabled = false; leftUIRayInteractor.enabled = false; });
        leftDirectInteractor.selectExited.AddListener(delegate { leftGrabRayInteractor.enabled = true; leftUIRayInteractor.enabled = true; });

        rightGrabRayInteractor.selectEntered.AddListener(delegate { rightDirectInteractor.enabled = false; rightUIRayInteractor.enabled = false; });
        rightGrabRayInteractor.selectExited.AddListener(delegate { rightDirectInteractor.enabled = true; rightUIRayInteractor.enabled = true; });
        rightGrabRayInteractor.hoverEntered.AddListener(delegate { rightDirectInteractor.enabled = false; rightUIRayInteractor.enabled = false; });
        rightGrabRayInteractor.hoverExited.AddListener(delegate { rightDirectInteractor.enabled = true; rightUIRayInteractor.enabled = true; });

        leftGrabRayInteractor.selectEntered.AddListener(delegate { leftDirectInteractor.enabled = false; leftUIRayInteractor.enabled = false; });
        leftGrabRayInteractor.selectExited.AddListener(delegate { leftDirectInteractor.enabled = true; leftUIRayInteractor.enabled = true; });
        leftGrabRayInteractor.hoverEntered.AddListener(delegate { leftDirectInteractor.enabled = false; leftUIRayInteractor.enabled = false; });
        leftGrabRayInteractor.hoverExited.AddListener(delegate { leftDirectInteractor.enabled = true; leftUIRayInteractor.enabled = true; });
    }
}
