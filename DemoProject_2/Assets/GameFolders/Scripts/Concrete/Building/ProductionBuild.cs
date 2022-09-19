using DemoProject2.ScriptableObjects;
using UnityEngine;

namespace DemoProject2.Buildings
{
    public class ProductionBuild : Building
    {
        [SerializeField] Canvas _canvas;
        [SerializeField] Transform _initialSpawnPos;
        [SerializeField] ProduceBuildingDataContainerSO _buildingData;
        [SerializeField] InformationActionSO _infoAction;


        public override void Awake()
        {
            base.Awake();
            GetReference();
        }

        public override void OnClick()
        {
            base.OnClick();
            HandleFeedBackProductionTap(true);
            _infoAction.HandleOnInformationOpen?.Invoke(_buildingData);
        }

        public override void OnRealse()
        {
            base.OnRealse();
            HandleFeedBackProductionTap(false);
            _infoAction.HandleOnInformationClose?.Invoke();
        }

        public override void OnCommand()
        {
            _initialSpawnPos.position = _camera.ScreenToWorldPoint(Input.mousePosition);
        }

        void HandleFeedBackProductionTap(bool value)
        {
            _canvas.enabled = value;
        }

        void OnValidate()
        {
            GetReference();
        }

        void GetReference()
        {
            if (_canvas == null)
                _canvas = GetComponentInChildren<Canvas>();
        }
    }
}