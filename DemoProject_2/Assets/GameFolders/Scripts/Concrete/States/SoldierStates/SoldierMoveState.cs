using DemoProject2.Controllers;
using Pathfinding;

namespace DemoProject2.StateMachines
{
    public class SoldierMoveState : SoldierState
    {
        public SoldierMoveState(StateMachine stateMachines, AIPath aiPath, SoldierController soldierController) : base(
            stateMachines, aiPath, soldierController)
        {
        }

        public override void Tick()
        {
            base.Tick();
            if (_aiPath.desiredVelocity.magnitude == 0)
            {
                _stateMachine.ChangeState(_soldierController.SoldierIdleState);
            }
        }
    }
}