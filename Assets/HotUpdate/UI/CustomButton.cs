using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using Sirenix.OdinInspector;

public class CustomButton : Button
{
    [TabGroup("CustomButton")]
    public bool isScale = true; //是否放大缩小
    [TabGroup("CustomButton"), ShowIf("isScale")]
    public float scaleValue = 1f; //放大倍数
    [TabGroup("CustomButton"), ShowIf("isScale"),ShowInInspector]
    public float duration = 0.2f; //放大时间
    [TabGroup("CustomButton"), ShowIf("isScale"),ShowInInspector]
    public Ease ease = Ease.Linear; //放大动画
    [TabGroup("CustomButton"), ShowIf("isScale"),ShowInInspector]
    public float hoverScaleValue = 1.3f; //鼠标悬浮时的放大倍数
    [TabGroup("CustomButton"), ShowIf("isScale"),ShowInInspector]
    public float hoverDuration = 0.1f; //鼠标悬浮时的放大时间
    [TabGroup("CustomButton"), ShowIf("isScale"),ShowInInspector]
    public Ease hoverEase = Ease.Linear; //鼠标悬浮时的放大动画

    private Vector3 originalScale; //原始缩放比例

    protected override void Awake()
    {
        base.Awake();
        originalScale = transform.localScale;
    }

    protected override void DoStateTransition(SelectionState state, bool instant)
    {
        base.DoStateTransition(state, instant);

        if (isScale)
        {
            if (state == SelectionState.Highlighted)
            {
                transform.DOScale(originalScale * hoverScaleValue, hoverDuration).SetEase(hoverEase);
            }
            else
            {
                transform.DOScale(originalScale * scaleValue, duration).SetEase(ease);
            }
        }
    }
}
