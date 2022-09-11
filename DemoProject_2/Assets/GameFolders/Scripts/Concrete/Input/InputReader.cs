using DemoProject2.Abstract.Input;
using UnityEngine.InputSystem;
using UnityEngine;

namespace DemoProject2.Inputs
{
    public class InputReader : IInputReader
    {
        readonly MouseClicks _clicks;
        public bool LeftClick => _clicks.PlayerMouse.LeftClick.WasPerformedThisFrame();
        public Vector2 ClickPos { get; private set; }
        public InputReader()
        {
            _clicks = new MouseClicks();
            _clicks.Enable();
            //_clicks.PlayerMouse.MousePosition.performed += HandleOnClick;
        }

        void HandleOnClick(InputAction.CallbackContext obj)
        {
            throw new System.NotImplementedException();
        }

        // void HandleOnClick(InputAction.CallbackContext context)
        // {
        //     if (LeftClick)
        //     {
        //     ClickPos = context.ReadValue<Vector2>();
        //     Debug.Log("position " + ClickPos);
        //     }
        // }

        void OnDisable()
        {
            _clicks.PlayerMouse.LeftClick.performed += HandleOnClick;
        }

        public Vector2 ReadPositionFromLeftClick()
        {
            if (LeftClick)
            {
                Debug.Log("Left mouse clicked");
                ClickPos = _clicks.PlayerMouse.MousePosition.ReadValue<Vector2>();
                Debug.Log(ClickPos);
                return ClickPos;
            }

            return Vector2.zero;

        }


    }
}
