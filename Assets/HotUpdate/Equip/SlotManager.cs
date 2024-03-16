using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine;

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
        bagInfoPanel.SetActive(false);
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
    /// 选中栏位物体
    /// </summary>
    /// <param name="scriptableObject">选中的物体</param>
    public void OnSlotSelected(ScriptableObject scriptableObject)
    {
        selectedScriptableObject = scriptableObject;
    }
    #endregion
}
