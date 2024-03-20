using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

/// <summary>
/// 该脚本借助PlayerContainer背包数据来应用装备到游戏中，其中的背景和动画控制器由对应的装备器来装备，请求全部向Requester请求
/// </summary>
public class ContainerManager : MonoBehaviour
{
    public static ContainerManager instance;

    [BoxGroup("背包"), ReadOnly, InfoBox("当前玩家动画控制器名字")]
    public string currentPlayerAniControllerName => playerContainer.euipedPlayerAniController.playerAniName;
    [BoxGroup("背包"), ReadOnly, InfoBox("当前背景名字")]
    public string currentBackgroundName => playerContainer.euipedBackground.backgroundMaterialName;

    [BoxGroup("背包"), ShowInInspector, Required, InfoBox("玩家背包"), InlineEditor(InlineEditorModes.GUIOnly)]
    public PlayerContainer playerContainer;

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

    public void UpdateFruitsPossesion(string fruitName, int fruitCount)
    {
        if (playerContainer.fruitsPossesion.ContainsKey(fruitName))
        {
            playerContainer.fruitsPossesion[fruitName] += fruitCount;
        }
        else
        {
            playerContainer.fruitsPossesion.Add(fruitName, fruitCount);
        }
        Debug.Log("更新果实信息" + fruitName + " " + playerContainer.fruitsPossesion[fruitName]);
    }

    public Dictionary<string, int> GetCurrentFruitsPossesion()
    {
        return playerContainer.fruitsPossesion;
    }
    
    #endregion
}