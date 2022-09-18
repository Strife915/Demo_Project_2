using UnityEngine;

namespace DemoProject2.Abstract.Input
{
    public interface IInputReader
    {
        public bool LeftClick { get; }
        public bool RightClick { get; }
        public Vector2 ClickPos { get; }
        Vector2 ReadPositionFromLeftClick();
    }
}