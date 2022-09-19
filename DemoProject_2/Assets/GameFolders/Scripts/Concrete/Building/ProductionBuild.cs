using UnityEngine;

namespace DemoProject2.Buildings
{
    public class ProductionBuild : Building
    {
        [SerializeField] Canvas _canvas;
        [SerializeField] Transform _initialSpawnPos;

        public override void Awake()
        {
            base.Awake();
            GetReference();
        }

        public override void OnClick()
        {
            base.OnClick();
            HandleFeedBackProductionTap(true);
        }

        public override void OnRealse()
        {
            base.OnRealse();
            HandleFeedBackProductionTap(false);
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