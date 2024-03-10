using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Apple : MonoBehaviour
{
    private Animator collectedAnimator;

    private void Awake()
    {
        collectedAnimator = transform.parent.GetChild(1).GetComponent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            GameManager.instance.AddFruitsCount("Apple", 1);
            collectedAnimator.Play("Collected_n");
            AudioManager.instance.PlaySoundEffect("PickUpCoin");
            gameObject.SetActive(false);
        }
    }
}
