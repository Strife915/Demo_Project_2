using DemoProject2.Abstract.Controlable;
using DemoProject2.Abstract.Mover;
using DemoProject2.ScriptableObjects;
using DemoProject2.StateMachines;
using Pathfinding;
using UnityEngine;

namespace DemoProject2.Controllers
{
    public class SoldierController : MonoBehaviour, IClickable
    {
        [SerializeField] SoldierDataContainerSO _stats;
        [SerializeField] Transform _target;
        [SerializeField] SpriteRenderer _sprite;

        IMover _mover;
        Camera _camera;
        AIPath _aiPath;
        AIDestinationSetter _aiDestinationSetter;
        bool _targetSet;

        public StateMachine SoldierStateMachine { get; private set; }
        public SoldierIdleState SoldierIdleState { get; private set; }
        public SoldierMoveState SoldierMoveState { get; private set; }
        public SpriteRenderer _selecSprite => _sprite;

        void Awake()
        {
            _aiPath = GetComponent<AIPath>();
            _aiDestinationSetter = GetComponent<AIDestinationSetter>();
            SoldierStateMachine = new StateMachine();
            SoldierIdleState = new SoldierIdleState(SoldierStateMachine, _aiPath, this);
            SoldierMoveState = new SoldierMoveState(SoldierStateMachine, _aiPath, this);
            _mover = new MoveWithAstar(_aiDestinationSetter, _aiPath, _target, _stats);
            _camera = Camera.main;
        }

        void Start()
        {
            _target.transform.parent = null;
            SoldierStateMachine.InıtializeState(SoldierIdleState);
        }

        void Update()
        {
            SoldierStateMachine.CurrentState.Tick();
        }

        public void OnClick()
        {
            UpdateSelectFeedBack(true);
            Debug.Log("click");
        }

        public void OnCommand()
        {
            if (!_aiPath.enabled)
                _aiPath.enabled = true;
            _target.position = _camera.ScreenToWorldPoint(Input.mousePosition);
            _mover.SetTarget(_target);
        }

        public void OnRealse()
        {
            UpdateSelectFeedBack(false);
        }

        void UpdateSelectFeedBack(bool value)
        {
            _selecSprite.enabled = value;
        }

        public void GetInitialPositionFromBuilding(Transform buildingInitialSpawnPos)
        {
            _target.position = buildingInitialSpawnPos.position;
        }
    }
}