using DemoProject2.Abstract.Input;
using DemoProject2.StateMachines;
using DemoProject2.Uis;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.Controllers
{
    public class PlayerController : MonoBehaviour
    {
        [SerializeField] Tilemap _mainTileMap;
        [SerializeField] GameObject _productionMenu;
        [SerializeField] LayerMask _layerMask;
        public ICursorController CursorController { get; private set; }
        public StateMachine StateMachine { get; private set; }
        public PlayerIdleState PlayerIdleState { get; private set; }
        public PlayerBuildState PlayerBuildState { get; private set; }
        public PlayerCommandState PlayerCommandState { get; private set; }
        public LayerMask LayerMask => _layerMask;

        void Awake()
        {
            StateMachine = new StateMachine();
            CursorController = new CursorController(this);
            PlayerIdleState = new PlayerIdleState(StateMachine, this);
            PlayerBuildState = new PlayerBuildState(StateMachine, _mainTileMap, _productionMenu);
            PlayerCommandState = new PlayerCommandState(StateMachine, this);
        }

        void Start()
        {
            StateMachine.InıtializeState(PlayerIdleState);
        }

        void Update()
        {
            StateMachine.CurrentState.Tick();
        }
    }
}