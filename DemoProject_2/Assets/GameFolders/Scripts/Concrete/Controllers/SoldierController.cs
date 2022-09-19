using System;
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
        [SerializeField] SoldierStatsDataContainerSo _stats;
        [SerializeField] Transform _target;
        [SerializeField] SpriteRenderer _sprite;

        IMover _mover;
        Camera _camera;

        public StateMachine SoldierStateMachine { get; private set; }
        public SoldierIdleState SoldierIdleState { get; private set; }
        public SoldierMoveState SoldierMoveState { get; private set; }
        public SpriteRenderer _selecSprite { get; }

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

        public void OnClick()
        {
            UpdateSelectFeedBack(true);
        }

        public void OnCommand()
        {
            _target.position = _camera.WorldToScreenPoint(Input.mousePosition);
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