using DemoProject2.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace DemoProject2.Uis
{
    public class InformationPanelFiller : MonoBehaviour
    {
        [SerializeField] InformationActionSO _informationAction;
        [SerializeField] Image _mainImage;
        [SerializeField] Image _subImage;
        [SerializeField] TextMeshProUGUI _mainName;
        [SerializeField] TextMeshProUGUI _subName;


        void Awake()
        {
            _informationAction.HandleOnInformationOpen += HandleOnClick;
            _informationAction.HandleOnInformationClose += HandleOnRealese;
        }

        void HandleOnRealese()
        {
            _mainImage.enabled = false;
            _subImage.enabled = false;
            _mainName.text = null;
            _subName.text = null;
        }

        void HandleOnClick(ProduceBuildingDataContainerSO context)
        {
            _mainImage.enabled = true;
            _subImage.enabled = true;
            _mainImage.sprite = context.MainSprite;
            _subImage.sprite = context.SubSprite;
            _mainName.text = context.MainName;
            _subName.text = context.SubName;
        }

        void OnDisable()
        {
            _informationAction.HandleOnInformationOpen -= HandleOnClick;
            _informationAction.HandleOnInformationClose -= HandleOnRealese;
        }
    }
}