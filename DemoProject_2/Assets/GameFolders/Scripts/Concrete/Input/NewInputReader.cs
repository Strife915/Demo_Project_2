using DemoProject2.Abstract.Input;
using UnityEngine;

namespace DemoProject2.Inputs
{
    public class NewInputReader : IInputReader
    {
        readonly MouseClicks _clicks;
        public bool LeftClick => _clicks.PlayerMouse.LeftClick.WasPerformedThisFrame();
        public Vector2 ClickPos { get; private set; }

        public NewInputReader()
        {
            _clicks = new MouseClicks();
            _clicks.Enable();
        }


        public Vector2 ReadPositionFromLeftClick()
        {
            if (LeftClick)
            {
                Debug.Log(ClickPos);
                ClickPos = _clicks.PlayerMouse.MousePosition.ReadValue<Vector2>();
                return ClickPos;
            }

            return Vector2.zero;
        }
    }
}