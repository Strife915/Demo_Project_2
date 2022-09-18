using DemoProject2.Abstract.Input;
using DemoProject2.Inputs;
using UnityEngine;

namespace DemoProject2.Controllers
{
    public class CursorController : ICursorController
    {
        PlayerController _player;
        LayerMask _layerMask;
        public IInputReader InputReader { get; private set; }

        public CursorController(PlayerController playerController)
        {
            InputReader = new NewInputReader();
            _player = playerController;
            _layerMask = _player.LayerMask;
        }

        public void Tick()
        {
            if (InputReader.LeftClick)
            {
                Debug.Log("Left click");
                RaycastHit2D hit = Physics2D.Raycast(InputReader.ClickPos, Vector2.zero, Mathf.Infinity, _layerMask);
                if (hit.collider == null)
                {
                    if (_player.StateMachine.CurrentState != _player.PlayerIdleState)
                        _player.StateMachine.ChangeState(_player.PlayerIdleState);
                }
                else
                {
                    Debug.Log(hit.collider.gameObject.name);
                    _player.StateMachine.ChangeState(_player.PlayerCommandState);
                }
            }
        }
    }
}