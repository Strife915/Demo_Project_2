using DemoProject2.Abstract.Controlable;
using DemoProject2.Abstract.Input;
using DemoProject2.Inputs;
using UnityEngine;

namespace DemoProject2.Controllers
{
    public class CursorController : ICursorController
    {
        PlayerController _player;
        UnitController _unitController;
        Camera _camera;
        LayerMask _layerMask;
        public IInputReader InputReader { get; private set; }

        public CursorController(PlayerController playerController)
        {
            InputReader = new NewInputReader();
            _unitController = new UnitController();
            _player = playerController;
            _layerMask = _player.LayerMask;
            _camera = Camera.main;
        }

        public void Tick()
        {
            if (InputReader.LeftClick)
            {
                //RaycastHit2D hit = Physics2D.Raycast(InputReader.ReadPositionFromLeftClick(), Vector2.zero);
                RaycastHit2D hit = Physics2D.Raycast(_camera.ScreenToWorldPoint(Input.mousePosition), Vector2.zero,
                    Mathf.Infinity, _layerMask);
                if (hit.collider == null)
                {
                    if (_player.StateMachine.CurrentState != _player.PlayerIdleState)
                        _player.StateMachine.ChangeState(_player.PlayerIdleState);
                    _unitController.ClearCommandList();
                }
                else
                {
                    _player.StateMachine.ChangeState(_player.PlayerCommandState);
                    IClickable obj = hit.collider.gameObject.GetComponent<IClickable>();
                    _unitController.AddToCommandList(obj);
                }
            }

            if (InputReader.RightClick)
            {
                _unitController.CommandAllUnits();
            }
        }
    }
}