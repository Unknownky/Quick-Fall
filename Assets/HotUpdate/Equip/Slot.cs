using UnityEngine.UI;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.EventSystems;

public class Slot : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
{
    [BoxGroup("栏位"), LabelText("当前栏位的物体")]
    public ScriptableObject scriptableObjectOnSlot;
    [BoxGroup("栏位"), LabelText("当前栏位的图片"), ShowInInspector]
    private RawImage slotImage; // 栏位的图片

    private void Awake()
    {
        Debug.Log("Slot Awake");
        slotImage = gameObject.GetComponentInChildren<RawImage>();
    }

    /// <summary>
    /// 设置栏位，暴露给SlotManager使用
    /// </summary>
    public void SetSlot(ScriptableObject scriptableObject, Texture texture)
    {
        scriptableObjectOnSlot = scriptableObject;
        slotImage.texture = texture;
        //将栏位alpha设为1
        if (texture != null)
            slotImage.color = new Color(slotImage.color.r, slotImage.color.g, slotImage.color.b, 1);
    }


    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("鼠标点击");
        if (scriptableObjectOnSlot != null)
        {
            Requester.instance.PlaySoundEffect("Select", 1f);
            OnSlotSelected();
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        Debug.Log("鼠标进入");
        if (scriptableObjectOnSlot != null)
        {
            SlotManager.instance.bagInfoPanel.SetActive(true);
            if (scriptableObjectOnSlot is Background)
                SlotManager.instance.bagInfoText.text = (scriptableObjectOnSlot as Background).backgroundDescription;
            else if (scriptableObjectOnSlot is PlayerAniController)
                SlotManager.instance.bagInfoText.text = (scriptableObjectOnSlot as PlayerAniController).playerAniDescription;
        }
    }


    public void OnPointerExit(PointerEventData eventData)
    {
        SlotManager.instance.bagInfoPanel.SetActive(false); //一直关闭背包信息面板
    }

    public void OnSlotSelected()
    {
        // 通知SlotManager当前栏位被选中
        SlotManager.instance.OnSlotSelected(scriptableObjectOnSlot);
    }
}
