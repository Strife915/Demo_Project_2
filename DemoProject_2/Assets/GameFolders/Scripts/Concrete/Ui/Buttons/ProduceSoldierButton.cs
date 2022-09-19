using DemoProject2.Abstract.Mover;
using UnityEngine;
using UnityEngine.UI;

namespace DemoProject2.Uis
{
    public class ProduceSoldierButton : MonoBehaviour
    {
        [SerializeField] GameObject _productionPrefab;
        [SerializeField] Button _button;
        [SerializeField] Transform _initialSpawnPos;
        [SerializeField] Transform _initialMovePos;

        void Awake()
        {
            GetReference();
            _button.onClick.AddListener(Produce);
        }

        void Produce()
        {
            Debug.Log("clicked");
            IMover soldier = Instantiate(_productionPrefab, _initialSpawnPos).GetComponent<IMover>();
            soldier.SetTarget(_initialMovePos);
        }

        void GetReference()
        {
            if (_button == null)
                _button = GetComponent<Button>();
        }

        void OnValidate()
        {
            GetReference();
        }
    }
}