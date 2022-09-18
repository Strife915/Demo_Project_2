using UnityEngine;

namespace DemoProject2.StateMachines
{
    public class PlayerCommandState : PlayerState
    {
        public PlayerCommandState(StateMachine stateMachine) : base(stateMachine)
        {
        }

        public override void Enter()
        {
            base.Enter();
            Debug.Log("Player Enter Command State");
        }
    }
}