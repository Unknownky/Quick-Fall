using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontDestory : MonoBehaviour
{
    private void Start() {
        StartCoroutine(DelayDontDestroy());
    }

    IEnumerator DelayDontDestroy()
    {
        yield return null;
        DontDestroyOnLoad(gameObject);
    }
}