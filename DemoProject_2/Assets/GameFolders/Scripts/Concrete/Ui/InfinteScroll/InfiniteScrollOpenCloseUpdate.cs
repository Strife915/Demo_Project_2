using UnityEngine;
using UnityEngine.UI;

namespace DemoProject2.Uis
{
    public class InfiniteScrollOpenCloseUpdate : MonoBehaviour
    {
        Button[] _buttons;

        void OnValidate()
        {
            _buttons = GetComponentsInChildren<Button>();
        }

        public void OpenCloseUpdate(bool value)
        {
            foreach (Button button in _buttons)
            {
                button.interactable = value;
            }
        }
    }
}