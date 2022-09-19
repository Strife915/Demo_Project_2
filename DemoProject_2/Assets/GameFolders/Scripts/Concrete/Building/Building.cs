using DemoProject2.Abstract.Controlable;
using UnityEngine;

namespace DemoProject2.Buildings
{
    public class Building : MonoBehaviour, IClickable
    {
        [SerializeField] SpriteRenderer _spriteRenderer;

        Vector3 _startPos;
        float _deltaX, _deltaY;
        protected Camera _camera;

        public bool Placed { get; private set; }
        public SpriteRenderer _selecSprite => _spriteRenderer;
        public BoundsInt area;


        public virtual void Awake()
        {
            _camera = Camera.main;
        }

        void OnMouseDown()
        {
            if (!Placed)
            {
                _startPos = Input.mousePosition;
                _startPos = _camera.ScreenToWorldPoint(_startPos);

                _deltaX = _startPos.x - transform.position.x;
                _deltaY = _startPos.y - transform.position.y;
            }
        }

        void OnMouseDrag()
        {
            if (!Placed)
            {
                Vector3 mousePos = _camera.ScreenToWorldPoint(Input.mousePosition);
                transform.position = new Vector3(mousePos.x - _deltaX, mousePos.y - _deltaY, 0);
                GridBuildingSystem.Instance.FollowBuilding();
            }
        }

        void OnMouseUp()
        {
            if (!Placed)
            {
                Vector3Int cellPosition = GridBuildingSystem.Instance.GridLayOut.LocalToCell(transform.position);
                transform.localPosition =
                    GridBuildingSystem.Instance.GridLayOut.CellToLocalInterpolated(cellPosition +
                        new Vector3(.5f, .5f, 0f));
            }
        }


        public bool CanBePlaced()
        {
            Vector3Int positionInt = GridBuildingSystem.Instance.GridLayOut.LocalToCell(transform.position);
            BoundsInt areaTemp = area;
            areaTemp.position = positionInt;

            if (GridBuildingSystem.Instance.CanTakeArea(areaTemp))
            {
                return true;
            }

            return false;
        }

        public void Place()
        {
            Vector3Int positionInt = GridBuildingSystem.Instance.GridLayOut.LocalToCell(transform.position);
            BoundsInt areaTemp = area;
            areaTemp.position = positionInt;

            Placed = true;

            GridBuildingSystem.Instance.TakeArea(areaTemp);
            AstarPath.active.Scan();
        }


        public virtual void OnClick()
        {
            HandleFeedBackOnclick(true);
        }

        public virtual void OnCommand()
        {
        }

        public virtual void OnRealse()
        {
            HandleFeedBackOnclick(false);
        }

        protected void HandleFeedBackOnclick(bool value)
        {
            _selecSprite.enabled = value;
        }
    }
}