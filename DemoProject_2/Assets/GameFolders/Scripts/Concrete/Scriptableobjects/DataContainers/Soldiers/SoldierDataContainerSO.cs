using UnityEngine;

namespace DemoProject2.ScriptableObjects
{
    [CreateAssetMenu(menuName = "Panteon/Data Container/Soldier Data", fileName = "Soldier Data Container")]
    public class SoldierDataContainerSO : ScriptableObject, ISoldierStats
    {
        [SerializeField] float _moveSpeed;
        public float MoveSpeed => _moveSpeed;
    }
}