namespace DemoProject2.StateMachines
{
    public class State
    {
        protected StateMachine _stateMachine;

        public virtual void Enter()
        {
        }

        public virtual void Exit()
        {
        }

        public virtual void Tick()
        {
        }

        public virtual void DoChecks()
        {
        }

        public virtual void FixedTick()
        {
        }
    }
}