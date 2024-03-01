using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    public GameObject player;

    void Start()
    {
        player = GameObject.Find("Player");
    }

    private void Update() {
        if (transform.position.y > player.transform.position.y)
            SceneManager.LoadScene(1);
    }
}
