using DemoProject2.Abstract.Input;

namespace DemoProject2.Abstract.Input
{
    public interface ICursorController
    {
        public IInputReader InputReader { get; }
        void Tick();
    }
}