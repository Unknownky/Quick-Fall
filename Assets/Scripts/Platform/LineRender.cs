using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineRender : MonoBehaviour
{
    public Transform startPoint;
    public Transform endPoint;
    LineRenderer lineRenderer;
    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    void Update()
    {
        lineRenderer.SetPosition(0, startPoint.position);//×¢Òâ´óÐ¡Ð´
        lineRenderer.SetPosition(1, endPoint.position);
    }
}
