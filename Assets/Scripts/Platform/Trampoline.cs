using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trampoline : MonoBehaviour
{

    Animator animator;
    public float pushHeight;
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            animator.Play("Trampoline_Jump");
            AudioManager.PlaySoundEffect("Jump");
            other.rigidbody.velocity = new Vector2(other.rigidbody.velocity.x, pushHeight);
        }
    }
}
