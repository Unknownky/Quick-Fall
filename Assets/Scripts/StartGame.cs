using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    [BoxGroup("Scene"), Required]
    public string sceneName;

    private void OnTriggerEnter2D(Collider2D other) {
        if (other.CompareTag("Player"))
        {
            SceneLoader.instance.AddressablesLoadSceneSingle(sceneName);
        }
    }

}
