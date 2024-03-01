using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    Animator ani;//����������
    Rigidbody2D rb;//�����������ڻ�ȡ��������в���

    [Header("move")]
    public float speed = 3f;

    public float dashSpeed = 4f;

    public float defaultGravityScale = 1.5f;
    public float dashGravity = 1.8f;

    public float sharpDownGravity = 3f;
    float xVelocity;//���ڽ���x���ƶ������ֵ


    //�����Ƿ��ڵ����ϵ��ж�������ֱ�����߼��
    [Header("detection")]
    public GameObject groundCheck;
    public bool isOnGround;
    public float checkRadius;
    public LayerMask platform;

    public static PlayerController instance;

    bool playerDead;//���ڽ�����Ϸ�����ж�

    bool playerMatchless;//���ڽ����޵��ж�

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    void Start()
    {
        ani = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        isOnGround = Physics2D.OverlapCircle(groundCheck.transform.position, checkRadius, platform);

        ani.SetBool("isOnGround", isOnGround);

        Movement();
    }

    void Movement()
    {
        xVelocity = Input.GetAxisRaw("Horizontal");


        if (Input.GetKey(KeyCode.LeftShift) && xVelocity != 0)
        {
            rb.velocity = new Vector2(transform.localScale.x * dashSpeed, rb.velocity.y);
            rb.gravityScale = dashGravity;
        }
        else
        {
            rb.velocity = new Vector2(xVelocity * speed, rb.velocity.y);//ֱ�Ӹ���xVelocity * speed�����ø����ٶ�,�������û��ʹ��AddForce�ķ�ʽ���ı������ٶ�
            rb.gravityScale = defaultGravityScale;
        }

        if(Input.GetKey(KeyCode.Space)){
            if(!isOnGround)
            {
                rb.gravityScale = sharpDownGravity;
            }
        }
        else
        {
            rb.gravityScale = defaultGravityScale;
        }


        ani.SetFloat("speed", Mathf.Abs(rb.velocity.x));//����������ٶ�������run״̬�����Ӻ�����ʵ
        //����������x�ƶ��ͻ�run
        if (xVelocity != 0)//�н��յ�
        {//�ı����ﳯ��
            transform.localScale = new Vector3(xVelocity, 1, 1);//ȡ��ͨ������ı���scaleֵ�ﵽ���ҷ�ת��Ч��
        }

        if (transform.position.y < -10)
        {
            PlayerDead();
        }
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("spike"))
        {
            ani.SetTrigger("dead");
            if (playerMatchless) return;
            PlayerDead();
        }
    }

    private void PlayerDead()
    {
        playerDead = true;
        GameManager.GameOver(playerDead);
    }

    public void PlayerMatchless(float time)
    {
        StartCoroutine(Matchless(time));
    }

    IEnumerator Matchless(float time)
    {
        playerMatchless = true;
        yield return new WaitForSeconds(time);
        playerMatchless = false;
    }

    private void OnDrawGizmosSelected()//Unity�Դ��ķ���,���ڻ�������
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(groundCheck.transform.position, checkRadius);
    }
}
