using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    public GameObject player;

    private void Update()
    {
        if (player != null)
        {
            if (transform.position.y > player?.transform.position.y)
                SceneManager.LoadScene(1);
        }
        else{
            player = GameObject.Find("Player(Clone)");
        }
    }
}
