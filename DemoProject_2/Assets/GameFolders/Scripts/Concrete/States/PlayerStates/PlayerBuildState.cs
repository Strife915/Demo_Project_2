using DemoProject2.Uis;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.StateMachines
{
    public class PlayerBuildState : PlayerState
    {
        Tilemap _mainTileMap;
        TilemapRenderer _tilemapRenderer;
        InfiniteScrollOpenCloseUpdate _infiniteScrollOpenCloseUpdate;

        public PlayerBuildState(StateMachine stateMachine, Tilemap mainTileMap,
            InfiniteScrollOpenCloseUpdate infiniteScrollOpenCloseUpdate) : base(stateMachine)
        {
            _mainTileMap = mainTileMap;
            _tilemapRenderer = mainTileMap.GetComponent<TilemapRenderer>();
            _infiniteScrollOpenCloseUpdate = infiniteScrollOpenCloseUpdate;
        }

        public override void Enter()
        {
            base.Enter();
            Debug.Log("Player Enter Build State");
            TileMapRendererUpdate(true);
            _infiniteScrollOpenCloseUpdate.OpenCloseUpdate(false);
        }

        public override void Exit()
        {
            base.Exit();
            TileMapRendererUpdate(false);
            _infiniteScrollOpenCloseUpdate.OpenCloseUpdate(true);
        }

        void TileMapRendererUpdate(bool value)
        {
            _tilemapRenderer.enabled = value;
        }
    }
}