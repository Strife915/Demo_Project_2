using UnityEngine;

namespace DemoProject2.StateMachines
{
    public class PlayerIdleState : PlayerState
    {
        public PlayerIdleState(StateMachine stateMachine) : base(stateMachine)
        {
        }

        public override void Enter()
        {
            base.Enter();
            Debug.Log("Player Enter Idle State");
        }
    }
}