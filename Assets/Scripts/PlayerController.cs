using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    Animator ani;//����������
    Rigidbody2D rb;//�����������ڻ�ȡ��������в���

    [Header("move")]
    public float speed;
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
    RaycastHit2D hit;

    private void Awake() {
        if(instance == null)
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

        rb.velocity = new Vector2(xVelocity * speed, rb.velocity.y);//ֱ�Ӹ���xVelocity * speed�����ø����ٶ�,�������û��ʹ��AddForce�ķ�ʽ���ı������ٶ�

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
            PlayerDead();
        }
    }

    private void PlayerDead()
    {
        if(playerMatchless) return;
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
