using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    Animator ani;//声明动画器
    Rigidbody2D rb;//声明刚体用于获取并对其进行操作

    // [Header("PlayerComponent")]

    [Header("move")]
    public float speed = 3f;

    public float dashSpeed = 4f;

    public float defaultGravityScale = 1.5f;
    public float dashGravity = 1.8f;

    public float sharpDownGravity = 3f;
    float xVelocity;//用于接收x轴移动的真假值


    //进行是否在地面上的判定，可以直接射线检测
    [Header("detection")]
    public bool teachLevel = false;
    public GameObject groundCheck;
    public bool isOnGround;
    public float checkRadius;
    public LayerMask platform;

    public static PlayerController instance;

    private GameObject matchLessEffect;


    bool playerDead;//用于进行游戏结束判定

    bool playerMatchless;//用于进行无敌判定

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
        matchLessEffect = transform.GetChild(1).gameObject;
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
            rb.velocity = new Vector2(xVelocity * speed, rb.velocity.y);//直接根据xVelocity * speed给到该刚体速度,这里简便而没有使用AddForce的方式来改变刚体的速度
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


        ani.SetFloat("speed", Mathf.Abs(rb.velocity.x));//根据物体的速度来设置run状态，更加合理真实
        //不放在下面x移动就会run
        if (xVelocity != 0)//有接收到
        {//改变人物朝向
            transform.localScale = new Vector3(xVelocity, 1, 1);//取巧通过反向改变了scale值达到左右反转的效果
        }

        if (transform.position.y < -10)
        {
            PlayerDead();
        }
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("spike") || other.CompareTag("Fire"))
        {
            if (playerMatchless) return;
            if(teachLevel){
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
                return;
            }
            ani.SetTrigger("dead");
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
        StartCoroutine(MatchlessBlink(time));
        yield return new WaitForSeconds(time);
        playerMatchless = false;
    }

    IEnumerator MatchlessBlink(float time)
    {
        matchLessEffect.SetActive(true);
        yield return new WaitForSeconds(time);
        matchLessEffect.SetActive(false);
    }

    private void OnDrawGizmosSelected()//Unity自带的方法,用于画各种线
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(groundCheck.transform.position, checkRadius);
    }
}
