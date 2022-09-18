namespace DemoProject2.StateMachines
{
    public class StateMachine
    {
        public State CurrentState { get; set; }

        public void InıtializeState(State startingState)
        {
            CurrentState = startingState;
            CurrentState.Enter();
        }

        public void ChangeState(State newState)
        {
            CurrentState.Exit();
            CurrentState = newState;
            CurrentState.Enter();
        }
    }
}