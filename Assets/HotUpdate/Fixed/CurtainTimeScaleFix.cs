using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

/// <summary>
/// 修正Curtain中途停止的问题 
/// </summary>
public class CurtainTimeScaleFix : MonoBehaviour
{
    Image currentImage;

    float alapha => currentImage.color.a;
    private void Awake() {
        currentImage = gameObject.GetComponent<Image>();
    }

    private void Update() {
        if(alapha > 0 && Time.timeScale == 0){
            Time.timeScale = 1f;
        }
    }
}
