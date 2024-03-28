using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    public static ShopManager instance;
    [BoxGroup("商店系统"), ShowInInspector]
    public List<Lattice> lattices = new List<Lattice>();
    [BoxGroup("商店系统"), InlineEditor(InlineEditorModes.GUIOnly), Required]
    public ShopContainer shopContainer; // 商格   
    [BoxGroup("商店系统"), LabelText("当前选中的物体"), ShowInInspector]
    public ScriptableObject selectedScriptableObject { private set; get; }
    [BoxGroup("商格"), LabelText("商格信息面板"), ShowInInspector, SceneObjectsOnly]
    public GameObject latticeInfoPanel { private set; get; }
    [BoxGroup("商格"), LabelText("商格信息面板的文本"), ShowInInspector, SceneObjectsOnly]
    public Text latticeInfoText;
    [BoxGroup("商格"), LabelText("果实图片")]
    public List<Sprite> fruitSprites = new List<Sprite>();

    Dictionary<string, Sprite> fruitSpriteDict = new Dictionary<string, Sprite>();

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
        lattices = gameObject.GetComponentsInChildren<Lattice>().ToList(); // 获取所有商格
        latticeInfoPanel = GameObject.Find("LatticeInfo");
        latticeInfoText = latticeInfoPanel.GetComponentInChildren<Text>();
        latticeInfoPanel.SetActive(false);
        GameObject.Find("ShopContainer").SetActive(false);
        foreach (var fruitSprite in fruitSprites)
        {
            //"Apple_0"->"Apple"
            string fruitName = fruitSprite.name.Split('_')[0];
            fruitSpriteDict.Add(fruitName, fruitSprite);
        }
    }

    private void OnEnable() {
        StartCoroutine(WaitFramsForRefresh());
    }

    IEnumerator WaitFramsForRefresh()
    {
        yield return null;
        Refreshlattices();
    }

    private void Start()
    {
        Refreshlattices();
    }

    #region 商店操作
    /// <summary>
    /// 将所有拥有的物体放入栏位,暂时将背景和动画放在一起
    /// </summary>
    [BoxGroup("商店系统"), Button("刷新商格")]
    public void Refreshlattices()
    {
        for (int i = 0; i < shopContainer.backgroundsForSale.Count; i++)
        {
            bool isOnBag = Requester.instance.IsLatticeOnBag(shopContainer.backgroundsForSale[i]);
            if (i < shopContainer.backgroundsForSale.Count)
            {
                Background background = shopContainer.backgroundsForSale[i];
                lattices[i].SetLattice(background, background.backgroundSprite, isOnBag);
                lattices[i].SetLatticeDemand(fruitSpriteDict[background.fruitType], background.backgroundPrice.ToString());
            }
            else if (i < shopContainer.backgroundsForSale.Count + shopContainer.playerAniControllersForSale.Count)
            {
                PlayerAniController playerAniController = shopContainer.playerAniControllersForSale[i - shopContainer.backgroundsForSale.Count];
                lattices[i].SetLattice(playerAniController, playerAniController.playerAniControllerSprite,isOnBag);
                lattices[i].SetLatticeDemand(fruitSpriteDict[playerAniController.fruitType], playerAniController.playerAniControllerPrice.ToString());
            }
            else
            {
                lattices[i].SetLattice(null, null,isOnBag);
            }
        }
    }

    /// <summary>
    /// 选中商品，然后根据钱币进行购买添加到背包
    /// </summary>
    /// <param name="scriptableObject">选中的物体</param>
    public void Onlatticeselected(ScriptableObject scriptableObject)
    {
        selectedScriptableObject = scriptableObject;
        Requester.instance.Shop(selectedScriptableObject);
    }
    #endregion


    
}
