using Sirenix.OdinInspector;
using UnityEngine;

public class ContainerManager : MonoBehaviour
{
    public static ContainerManager instance;

    [BoxGroup("背包")]
    public string currentPlayerAniControllerName;

    public string currentBackgroundName;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }
}