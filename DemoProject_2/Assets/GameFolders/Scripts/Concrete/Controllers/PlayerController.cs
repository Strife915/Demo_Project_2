using DemoProject2.Inputs;
using UnityEngine;

namespace DemoProject2.Controllers
{
    public class PlayerController : MonoBehaviour
    {
        public InputReader Input { get; private set; }
        void Awake()
        {
            Input = new InputReader();
        }

        void Update()
        {
            //Input.ReadPositionFromLeftClick();
        }
    }
}
