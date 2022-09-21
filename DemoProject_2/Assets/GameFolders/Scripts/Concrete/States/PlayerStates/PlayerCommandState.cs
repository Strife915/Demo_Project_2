using DemoProject2.Abstract.Input;
using DemoProject2.Controllers;
using UnityEngine;

namespace DemoProject2.StateMachines
{
    public class PlayerCommandState : PlayerState
    {
        readonly ICursorController _cursorController;

        public PlayerCommandState(StateMachine stateMachine, PlayerController playerController) : base(stateMachine)
        {
            _cursorController = playerController.CursorController;
        }

        public override void Enter()
        {
        }

        public override void Tick()
        {
            _cursorController.Tick();
        }
    }
}