using UnityEngine;

namespace DemoProject2.Abstract.Controlable
{
    public interface IClickable
    {
        public SpriteRenderer _selecSprite { get; }
        void OnClick();
        void OnCommand();
        void OnRealse();
    }
}