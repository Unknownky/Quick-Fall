using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Sirenix.OdinInspector;
using UnityEngine.UI;

public class Lattice : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
{
    [BoxGroup("商格"), LabelText("当前商格的物体")]
    public ScriptableObject scriptableObjectOnSlot;
    [BoxGroup("商格"), LabelText("当前商格的图片"), ShowInInspector]
    private RawImage slotImage; // 商格的图片
    [BoxGroup("商格"), LabelText("当前商格需求物体图片组件"), HideInInspector]
    private Image demandImage; // 商格的需求物体图片
    [BoxGroup("商格"), LabelText("当前商格需求物体文本"), HideInInspector]
    private Text demandText; // 商格的需求物体文本
    [BoxGroup("商格"), LabelText("已经购买的物品的alpha值"), ShowInInspector]
    private float alpha = 0.5f;


    private void Awake()
    {
        Debug.Log("Slot Awake");
        slotImage = gameObject.GetComponentInChildren<RawImage>();
        demandImage = transform.parent.GetChild(1).GetComponent<Image>();
        demandText = transform.parent.GetChild(2).GetComponent<Text>();
    }

    /// <summary>
    /// 设置商格，暴露给ShopManager使用
    /// </summary>
    public void SetLattice(ScriptableObject scriptableObject, Texture texture, bool isOnBag)
    {
        scriptableObjectOnSlot = scriptableObject;
        slotImage.texture = texture;
        //将商格alpha设为1
        if (texture != null)
            if(!isOnBag)
                slotImage.color = new Color(slotImage.color.r, slotImage.color.g, slotImage.color.b, 1);
            else
                slotImage.color = new Color(slotImage.color.r, slotImage.color.g, slotImage.color.b, alpha);
    }

    public void SetLatticeDemand(Sprite demandSprite, string price)
    {
        demandImage.sprite = demandSprite;
        demandImage.color = new Color(demandImage.color.r, demandImage.color.g, demandImage.color.b, 1);
        demandText.text = price;
    }


    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("鼠标点击");
        if (scriptableObjectOnSlot != null)
        {
            Requester.instance.PlaySoundEffect("Select", 1f);
            OnLatticeSelected();
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        Debug.Log("鼠标进入");
        if (scriptableObjectOnSlot != null)
        {
            ShopManager.instance.latticeInfoPanel.SetActive(true);
            if (scriptableObjectOnSlot is Background)
                ShopManager.instance.latticeInfoText.text = (scriptableObjectOnSlot as Background).backgroundDescription;
            else if (scriptableObjectOnSlot is PlayerAniController)
                ShopManager.instance.latticeInfoText.text = (scriptableObjectOnSlot as PlayerAniController).playerAniDescription;
        }
    }


    public void OnPointerExit(PointerEventData eventData)
    {
        ShopManager.instance.latticeInfoPanel.SetActive(false); //一直关闭商格信息面板
    }

    public void OnLatticeSelected()
    {
        if(slotImage.color.a == alpha)
        {
            Debug.Log("已经购买");
            return;
        }
        else if(slotImage.color.a == 1f)
        {
            Debug.Log("需要购买");
            // 通知ShopManager当前商格被选中
            ShopManager.instance.Onlatticeselected(scriptableObjectOnSlot);
        }
    }
}
