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

        public IMover _mover { get; private set; }
        Camera _camera;

        public StateMachine SoldierStateMachine { get; private set; }
        public SoldierIdleState SoldierIdleState { get; private set; }
        public SoldierMoveState SoldierMoveState { get; private set; }
        public SpriteRenderer _selecSprite => _sprite;

        void Awake()
        {
            SoldierStateMachine = new StateMachine();
            SoldierIdleState = new SoldierIdleState(SoldierStateMachine, GetComponent<AIPath>(), this);
            SoldierMoveState = new SoldierMoveState(SoldierStateMachine, GetComponent<AIPath>(), this);
            _mover = new MoveWithAstar(GetComponent<AIDestinationSetter>(), GetComponent<AIPath>(), _target, _stats);
            _camera = Camera.main;
        }

        void Start()
        {
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
            _target.position = _camera.ScreenToWorldPoint(Input.mousePosition);
            _target.transform.parent = null;
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
    }
}