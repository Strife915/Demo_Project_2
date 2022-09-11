using UnityEngine;

namespace DemoProject2.Abstract.Input
{
    public interface IInputReader
    {
        public bool LeftClick { get;  }
        public Vector2 ClickPos { get;  }
    }
}

