using UnityEngine;

namespace DemoProject2.Cameras
{
    public class EventMask : MonoBehaviour
    {
        [SerializeField] LayerMask _inputLayerMask;

        void Start()
        {
            Camera.main.eventMask = _inputLayerMask;
        }
    }
}