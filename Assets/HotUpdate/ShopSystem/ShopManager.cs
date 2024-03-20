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
                lattices[i].SetLattice(shopContainer.backgroundsForSale[i], shopContainer.backgroundsForSale[i].backgroundSprite, isOnBag);

            }
            else if (i < shopContainer.backgroundsForSale.Count + shopContainer.playerAniControllersForSale.Count)
            {
                lattices[i].SetLattice(shopContainer.playerAniControllersForSale[i - shopContainer.backgroundsForSale.Count], shopContainer.playerAniControllersForSale[i - shopContainer.backgroundsForSale.Count].playerAniControllerSprite,isOnBag);
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
