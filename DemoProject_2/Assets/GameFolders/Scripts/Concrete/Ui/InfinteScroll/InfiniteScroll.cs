using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InfiniteScroll : MonoBehaviour, IBeginDragHandler, IDragHandler, IScrollHandler
{
    [SerializeField] ScrollContent _scrollContent;
    [SerializeField] float _outOfBoundsThreshold;

    ScrollRect _scrollRect;
    Vector2 _lastDragPosition;
    bool _positiveDrag;


    void Start()
    {
        _scrollRect = GetComponent<ScrollRect>();
        _scrollRect.vertical = _scrollContent.Vertical;
        _scrollRect.horizontal = _scrollContent.Horizontal;
        _scrollRect.movementType = ScrollRect.MovementType.Unrestricted;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        _lastDragPosition = eventData.position;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (_scrollContent.Vertical)
        {
            _positiveDrag = eventData.position.y > _lastDragPosition.y;
        }
        else if (_scrollContent.Horizontal)
        {
            _positiveDrag = eventData.position.x > _lastDragPosition.x;
        }

        _lastDragPosition = eventData.position;
    }

    public void OnScroll(PointerEventData eventData)
    {
        if (_scrollContent.Vertical)
        {
            _positiveDrag = eventData.scrollDelta.y > 0;
        }
        else
        {
            _positiveDrag = eventData.scrollDelta.y < 0;
        }
    }

    public void OnViewScroll()
    {
        if (_scrollContent.Vertical)
        {
            HandleVerticalScroll();
        }
        else
        {
            HandleHorizontalScroll();
        }
    }

    void HandleVerticalScroll()
    {
        int currItemIndex = _positiveDrag ? _scrollRect.content.childCount - 1 : 0;
        var currItem = _scrollRect.content.GetChild(currItemIndex);

        if (!ReachedThreshold(currItem))
        {
            return;
        }

        int endItemIndex = _positiveDrag ? 0 : _scrollRect.content.childCount - 1;
        Transform endItem = _scrollRect.content.GetChild(endItemIndex);
        Vector2 newPos = endItem.position;

        if (_positiveDrag)
        {
            newPos.y = endItem.position.y - _scrollContent.ChildHeight * 1.5f + _scrollContent.ItemSpacing;
        }
        else
        {
            newPos.y = endItem.position.y + _scrollContent.ChildHeight * 1.5f - _scrollContent.ItemSpacing;
        }

        currItem.position = newPos;
        currItem.SetSiblingIndex(endItemIndex);
    }

    void HandleHorizontalScroll()
    {
        int currItemIndex = _positiveDrag ? _scrollRect.content.childCount - 1 : 0;
        var currItem = _scrollRect.content.GetChild(currItemIndex);
        if (!ReachedThreshold(currItem))
        {
            return;
        }

        int endItemIndex = _positiveDrag ? 0 : _scrollRect.content.childCount - 1;
        Transform endItem = _scrollRect.content.GetChild(endItemIndex);
        Vector2 newPos = endItem.position;

        if (_positiveDrag)
        {
            newPos.x = endItem.position.x - _scrollContent.ChildWidth * 1.5f + _scrollContent.ItemSpacing;
        }
        else
        {
            newPos.x = endItem.position.x + _scrollContent.ChildWidth * 1.5f - _scrollContent.ItemSpacing;
        }

        currItem.position = newPos;
        currItem.SetSiblingIndex(endItemIndex);
    }

    bool ReachedThreshold(Transform item)
    {
        if (_scrollContent.Vertical)
        {
            float posYThreshold = transform.position.y + _scrollContent.Height * 0.5f + _outOfBoundsThreshold;
            float negYThreshold = transform.position.y - _scrollContent.Height * 0.5f - _outOfBoundsThreshold;
            return _positiveDrag
                ? item.position.y - _scrollContent.ChildWidth * 0.5f > posYThreshold
                : item.position.y + _scrollContent.ChildWidth * 0.5f < negYThreshold;
        }
        else
        {
            float posXThreshold = transform.position.x + _scrollContent.Width * 0.5f + _outOfBoundsThreshold;
            float negXThreshold = transform.position.x - _scrollContent.Width * 0.5f - _outOfBoundsThreshold;
            return _positiveDrag
                ? item.position.x - _scrollContent.ChildWidth * 0.5f > posXThreshold
                : item.position.x + _scrollContent.ChildWidth * 0.5f < negXThreshold;
        }
    }
}