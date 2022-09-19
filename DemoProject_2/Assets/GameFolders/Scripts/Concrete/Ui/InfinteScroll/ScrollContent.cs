using UnityEngine;

public class ScrollContent : MonoBehaviour
{
    [SerializeField] float _itemSpacing;
    [SerializeField] float _horizontalMargin, _verticalMargin;
    [SerializeField] bool _horizontal, _vertical;

    RectTransform rectTransform;
    RectTransform[] rtChildren;
    float width, height;
    float childWidth, childHeight;


    public float ItemSpacing => _itemSpacing;
    public float HorizontalMargin => _horizontalMargin;
    public float VerticalMargin => _verticalMargin;
    public bool Horizontal => _horizontal;
    public bool Vertical => _vertical;
    public float Width => width;
    public float Height => height;
    public float ChildWidth => childWidth;
    public float ChildHeight => childHeight;

    void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
        rtChildren = new RectTransform[rectTransform.childCount];
    }

    void Start()
    {
        for (int i = 0; i < rectTransform.childCount; i++)
        {
            rtChildren[i] = rectTransform.GetChild(i) as RectTransform;
        }

        width = rectTransform.rect.width - (2 * _horizontalMargin);
        height = rectTransform.rect.height - (2 * _verticalMargin);
        childWidth = rtChildren[0].rect.width;
        childHeight = rtChildren[0].rect.height;
        _horizontal = !_vertical;
        if (_vertical)
            InitializeContentVertical();
        else
            InitializeContentHorizontal();
    }


    void InitializeContentHorizontal()
    {
        float originX = 0 - (width * 0.5f);
        float posOffset = childWidth * 0.5f;
        for (int i = 0; i < rtChildren.Length; i++)
        {
            Vector2 childPos = rtChildren[i].localPosition;
            childPos.x = originX + posOffset + i * (childWidth + _itemSpacing);
            rtChildren[i].localPosition = childPos;
        }
    }


    void InitializeContentVertical()
    {
        float originY = 0 - (height * 0.5f);
        float posOffset = childHeight * 0.5f;
        for (int i = 0; i < rtChildren.Length; i++)
        {
            Vector2 childPos = rtChildren[i].localPosition;
            childPos.y = originY + posOffset + i * (childHeight + _itemSpacing);
            rtChildren[i].localPosition = childPos;
        }
    }
}