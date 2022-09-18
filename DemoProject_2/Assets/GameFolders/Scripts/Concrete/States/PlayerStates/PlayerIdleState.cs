using DemoProject2.Abstract.Input;
using DemoProject2.Controllers;
using UnityEngine;

namespace DemoProject2.StateMachines
{
    public class PlayerIdleState : PlayerState
    {
        ICursorController _cursorController;

        public PlayerIdleState(StateMachine stateMachine, PlayerController playerController) : base(stateMachine)
        {
            _cursorController = playerController.CursorController;
        }

        public override void Enter()
        {
            base.Enter();
            Debug.Log("Player Enter Idle State");
        }

        public override void Tick()
        {
            _cursorController.Tick();
        }
    }
}