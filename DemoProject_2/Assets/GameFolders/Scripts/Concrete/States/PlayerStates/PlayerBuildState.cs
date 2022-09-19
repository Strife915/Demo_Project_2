using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.StateMachines
{
    public class PlayerBuildState : PlayerState
    {
        Tilemap _mainTileMap;
        TilemapRenderer _tilemapRenderer;
        GameObject _productionPanel;

        public PlayerBuildState(StateMachine stateMachine, Tilemap mainTileMap, GameObject productionPanel) : base(
            stateMachine)
        {
            _mainTileMap = mainTileMap;
            _tilemapRenderer = mainTileMap.GetComponent<TilemapRenderer>();
            _productionPanel = productionPanel;
        }

        public override void Enter()
        {
            base.Enter();
            Debug.Log("Player Enter Build State");
            TileMapRendererUpdate(true);
            _productionPanel.SetActive(false);
        }

        public override void Exit()
        {
            base.Exit();
            TileMapRendererUpdate(false);
            _productionPanel.SetActive(true);
        }

        void TileMapRendererUpdate(bool value)
        {
            _tilemapRenderer.enabled = value;
        }
    }
}