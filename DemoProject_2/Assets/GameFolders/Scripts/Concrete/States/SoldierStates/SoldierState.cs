using DemoProject2.Controllers;
using Pathfinding;

namespace DemoProject2.StateMachines
{
    public class SoldierState : State
    {
        protected StateMachine _stateMachine;
        protected AIPath _aiPath;
        protected SoldierController _soldierController;

        public SoldierState(StateMachine stateMachines, AIPath aiPath, SoldierController soldierController)
        {
            _soldierController = soldierController;
            _stateMachine = stateMachines;
            _aiPath = aiPath;
        }
    }
}