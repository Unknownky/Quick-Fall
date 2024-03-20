using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 该脚本只管理栏位的显示和背包选中物体的操作， 然后通过ContainerManager来应用装备到游戏中
/// </summary>
public class SlotManager : MonoBehaviour
{
    public static SlotManager instance;
    [BoxGroup("背包系统"), ShowInInspector]
    public List<Slot> slots = new List<Slot>();
    [BoxGroup("背包系统"), InlineEditor(InlineEditorModes.GUIOnly), Required]
    public PlayerContainer playerContainer; // 玩家背包    
    [BoxGroup("背包系统"), LabelText("当前选中的物体"), ShowInInspector]
    public ScriptableObject selectedScriptableObject { private set; get; }
    [BoxGroup("栏位"), LabelText("背包信息面板"), ShowInInspector, SceneObjectsOnly]
    public GameObject bagInfoPanel { private set; get; }
    [BoxGroup("栏位"), LabelText("背包信息面板的文本"), ShowInInspector, SceneObjectsOnly]
    public Text bagInfoText;

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
        slots = gameObject.GetComponentsInChildren<Slot>().ToList(); // 获取所有栏位
        bagInfoPanel = GameObject.Find("BagInfo");
        bagInfoText = bagInfoPanel.GetComponentInChildren<Text>();
        bagInfoPanel.SetActive(false);
    }

    private void OnEnable() {
        StartCoroutine(WaitFramsForRefresh());
    }

    IEnumerator WaitFramsForRefresh()
    {
        yield return null;
        RefreshSlots();
    }

    private void Start()
    {
        RefreshSlots();
    }

    #region 背包操作
    /// <summary>
    /// 将所有拥有的物体放入栏位,暂时将背景和动画放在一起
    /// </summary>
    [BoxGroup("背包系统"), Button("刷新栏位")]
    public void RefreshSlots()
    {
        for (int i = 0; i < slots.Count; i++)
        {
            if (i < playerContainer.backgroundsPossesion.Count)
            {
                slots[i].SetSlot(playerContainer.backgroundsPossesion[i], playerContainer.backgroundsPossesion[i].backgroundSprite);
            }
            else if (i < playerContainer.backgroundsPossesion.Count + playerContainer.playerAniControllersPossesion.Count)
            {
                slots[i].SetSlot(playerContainer.playerAniControllersPossesion[i - playerContainer.backgroundsPossesion.Count], playerContainer.playerAniControllersPossesion[i - playerContainer.backgroundsPossesion.Count].playerAniControllerSprite);
            }
            else
            {
                slots[i].SetSlot(null, null);
            }
        }
    }

    /// <summary>
    /// 选中栏位物体，然后将该物体装备起来
    /// </summary>
    /// <param name="scriptableObject">选中的物体</param>
    public void OnSlotSelected(ScriptableObject scriptableObject)
    {
        selectedScriptableObject = scriptableObject;
        if (scriptableObject is Background)
        {
            #if !UNITY_EDITOR
            ContainerManager.instance.EquipBackground(scriptableObject as Background); //游玩时装备背景
            #else
            playerContainer.euipedBackground = scriptableObject as Background; //编辑器模式下装备背景
            #endif
        }
        else if (scriptableObject is PlayerAniController)
        {
            #if !UNITY_EDITOR
            ContainerManager.instance.EquipPlayerAniController(scriptableObject as PlayerAniController);
            #else
            playerContainer.euipedPlayerAniController = scriptableObject as PlayerAniController;
            #endif
        }
    }
    #endregion
}
