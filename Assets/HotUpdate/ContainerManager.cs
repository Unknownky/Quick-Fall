using Sirenix.OdinInspector;
using UnityEngine;

public class ContainerManager : MonoBehaviour
{
    public static ContainerManager instance;

    [BoxGroup("背包"), ReadOnly, InfoBox("当前玩家动画控制器名字")]
    public string currentPlayerAniControllerName => playerContainer.euipedPlayerAniController.name;
    [BoxGroup("背包"), ReadOnly, InfoBox("当前背景名字")]
    public string currentBackgroundName => playerContainer.euipedBackground.name;

    [BoxGroup("背包"), ShowInInspector, Required, InfoBox("玩家背包"), InlineEditor(InlineEditorModes.GUIOnly)]
    public PlayerContainer playerContainer { private set;  get; }

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

    private void Start() {
        if (playerContainer.euipedBackground == null)
        {
            playerContainer.euipedBackground = playerContainer.backgroundsPossesion[0];
        }
        if (playerContainer.euipedPlayerAniController == null)
        {
            playerContainer.euipedPlayerAniController = playerContainer.playerAniControllersPossesion[0];
        }
    }

    #region 背包操作
    public void EquipBackground(Background background)
    {
        playerContainer.euipedBackground = background;
    }

    public void EquipPlayerAniController(PlayerAniController playerAniController)
    {
        playerContainer.euipedPlayerAniController = playerAniController;
    }

    #endregion
}