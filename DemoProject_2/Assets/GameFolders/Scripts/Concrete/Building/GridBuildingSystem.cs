using System.Collections.Generic;
using DemoProject2.Abstract.Patterns;
using DemoProject2.Controllers;
using DemoProject2.Enums;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.Building
{
    public class GridBuildingSystem : SingletonMonoObject<GridBuildingSystem>
    {
        [SerializeField] GridLayout _gridLayout;
        [SerializeField] Tilemap _mainTilemap;
        [SerializeField] Tilemap _tempTilemap;
        [SerializeField] PlayerController _player;

        Dictionary<TileType, TileBase> tileBases = new Dictionary<TileType, TileBase>();
        Building _temp;
        BoundsInt _prevArea;

        public GridLayout GridLayOut => _gridLayout;


        void Awake()
        {
            SetSingletonValue(this);
        }

        void Start()
        {
            string tilePath = "Tiles/";
            tileBases.Add(TileType.Empty, null);
            tileBases.Add(TileType.White, Resources.Load<TileBase>(tilePath + "White"));
            tileBases.Add(TileType.Red, Resources.Load<TileBase>(tilePath + "Red"));
            tileBases.Add(TileType.Green, Resources.Load<TileBase>(tilePath + "Green"));
        }

        void Update()
        {
            if (!_temp)
            {
                return;
            }

            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (_temp.CanBePlaced())
                {
                    _temp.Place();
                    _player.StateMachine.ChangeState(_player.PlayerIdleState);
                }
            }
            else if (Input.GetKeyDown(KeyCode.Escape))
            {
                ClearArea();
                Destroy(_temp.gameObject);
                _player.StateMachine.ChangeState(_player.PlayerIdleState);
            }
        }


        public TileBase[] GetTilesBlock(BoundsInt area, Tilemap tilemap)
        {
            TileBase[] array = new TileBase[area.size.x * area.size.y * area.size.z];
            int counter = 0;

            foreach (var v in area.allPositionsWithin)
            {
                Vector3Int pos = new Vector3Int(v.x, v.y, 0);
                array[counter] = tilemap.GetTile(pos);
                counter++;
            }

            return array;
        }


        public void SetTilesBlock(BoundsInt area, TileType type, Tilemap tilemap)
        {
            TileBase[] tileArray = new TileBase[area.size.x * area.size.y * area.size.z];
            FillTiles(tileArray, type);
            tilemap.SetTilesBlock(area, tileArray);
        }


        public void FillTiles(TileBase[] arr, TileType type)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = tileBases[type];
            }
        }


        public void InitializeWithBuilding(GameObject building)
        {
            Vector3 position = _gridLayout.CellToLocalInterpolated(new Vector3(.5f, .5f, 0f));
            _temp = Instantiate(building, position, Quaternion.identity).GetComponent<Building>();
            FollowBuilding();
            _player.StateMachine.ChangeState(_player.PlayerBuildState);
        }

        void ClearArea()
        {
            TileBase[] toClear = new TileBase[_prevArea.size.x * _prevArea.size.y * _prevArea.size.z];
            FillTiles(toClear, TileType.Empty);
            _tempTilemap.SetTilesBlock(_prevArea, toClear);
        }

        public void FollowBuilding()
        {
            ClearArea();

            _temp.area.position = _gridLayout.WorldToCell(_temp.gameObject.transform.position);
            BoundsInt buildingArea = _temp.area;

            TileBase[] baseArray = GetTilesBlock(buildingArea, _mainTilemap);

            int size = baseArray.Length;
            TileBase[] tileArray = new TileBase[size];

            for (int i = 0; i < baseArray.Length; i++)
            {
                if (baseArray[i] == tileBases[TileType.White])
                {
                    tileArray[i] = tileBases[TileType.Green];
                }
                else
                {
                    FillTiles(tileArray, TileType.Red);
                    break;
                }
            }

            _tempTilemap.SetTilesBlock(buildingArea, tileArray);
            _prevArea = buildingArea;
        }

        public bool CanTakeArea(BoundsInt area)
        {
            TileBase[] baseArray = GetTilesBlock(area, _mainTilemap);
            foreach (var b in baseArray)
            {
                if (b != tileBases[TileType.White])
                {
                    return false;
                }
            }

            return true;
        }

        public void TakeArea(BoundsInt area)
        {
            SetTilesBlock(area, TileType.Empty, _tempTilemap);
            SetTilesBlock(area, TileType.Green, _mainTilemap);
        }
    }
}