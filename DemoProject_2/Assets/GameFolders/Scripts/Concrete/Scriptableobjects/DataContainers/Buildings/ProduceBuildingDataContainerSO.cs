using UnityEngine;

namespace DemoProject2.ScriptableObjects
{
    [CreateAssetMenu(menuName = "Panteon/Data Container/Building Data", fileName = "Building Data Container")]
    public class ProduceBuildingDataContainerSO : ScriptableObject
    {
        [SerializeField] string _mainName;
        [SerializeField] string _subName;
        [SerializeField] Sprite _mainImage;
        [SerializeField] Sprite _subImage;

        public string MainName => _mainName;
        public string SubName => _subName;
        public Sprite MainSprite => _mainImage;
        public Sprite SubSprite => _subImage;
    }
}