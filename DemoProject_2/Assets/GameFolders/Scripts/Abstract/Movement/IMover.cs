using UnityEngine;

namespace DemoProject2.Abstract.Mover
{
    public interface IMover
    {
        void Move();
        void SetTarget(Transform transform);
    }
}