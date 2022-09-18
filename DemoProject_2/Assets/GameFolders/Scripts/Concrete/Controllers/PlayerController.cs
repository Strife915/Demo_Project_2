using System;
using DemoProject2.Inputs;
using DemoProject2.StateMachines;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.Controllers
{
    public class PlayerController : MonoBehaviour
    {
        [SerializeField] Tilemap _mainTileMap;
        public StateMachine StateMachine { get; private set; }
        public PlayerIdleState PlayerIdleState { get; private set; }
        public PlayerBuildState PlayerBuildState { get; private set; }
        public PlayerCommandState PlayerCommandState { get; private set; }
        public InputReader Input { get; private set; }

        void Awake()
        {
            StateMachine = new StateMachine();
            PlayerIdleState = new PlayerIdleState(StateMachine);
            PlayerBuildState = new PlayerBuildState(StateMachine, _mainTileMap);
            PlayerCommandState = new PlayerCommandState(StateMachine);
            Input = new InputReader();
        }

        void Start()
        {
            StateMachine.InıtializeState(PlayerIdleState);
        }

        void Update()
        {
            //Input.ReadPositionFromLeftClick();
        }
    }
}