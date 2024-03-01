using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Apple : MonoBehaviour
{
    public int score = 2;

    private Animator collectedAnimator;

    private void Awake()
    {
        collectedAnimator = transform.parent.GetChild(1).GetComponent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            GameManager.instance.AddScore(score);
            collectedAnimator.Play("Collected_n");
            gameObject.SetActive(false);
        }
    }
}
