using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.StateMachines
{
    public class PlayerBuildState : PlayerState
    {
        Tilemap _mainTileMap;
        TilemapRenderer _tilemapRenderer;

        public PlayerBuildState(StateMachine stateMachine, Tilemap mainTileMap) : base(stateMachine)
        {
            _mainTileMap = mainTileMap;
            _tilemapRenderer = mainTileMap.GetComponent<TilemapRenderer>();
        }

        public override void Enter()
        {
            base.Enter();
            Debug.Log("Player Enter Build State");
            TileMapRendererUpdate(true);
        }

        public override void Exit()
        {
            base.Exit();
            TileMapRendererUpdate(false);
        }

        void TileMapRendererUpdate(bool value)
        {
            _tilemapRenderer.enabled = value;
        }
    }
}