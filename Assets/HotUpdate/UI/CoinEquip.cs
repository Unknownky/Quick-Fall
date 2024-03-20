using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public class CoinEquip : MonoBehaviour
{
    [BoxGroup("金币"), ShowInInspector, Required, InfoBox("金币数量"), SceneObjectsOnly]
    public List<Text> fruitsTexts;

    public static CoinEquip instance;

    private void Awake() {
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
        UpdateCoinPossesion();
    }


    public void UpdateCoinPossesion()
    {
        var fruitsPossesion = ContainerManager.instance.playerContainer.fruitsPossesion;
        for (int i = 0; i < fruitsTexts.Count; i++)
        {
            fruitsTexts[i].text = fruitsPossesion[fruitsTexts[i].name].ToString();
            Debug.Log(fruitsTexts[i].name + " " + fruitsPossesion[fruitsTexts[i].name]);
        }
    }
}
