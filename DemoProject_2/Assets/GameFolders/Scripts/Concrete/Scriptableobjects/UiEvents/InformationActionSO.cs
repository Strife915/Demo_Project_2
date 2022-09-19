using UnityEngine;

namespace DemoProject2.ScriptableObjects
{
    [CreateAssetMenu(menuName = "Panteon/Actions/Information Panel Action", fileName = "Information Panel Action")]
    public class InformationActionSO : ScriptableObject
    {
        public System.Action<ProduceBuildingDataContainerSO> HandleOnInformationOpen;
        public System.Action HandleOnInformationClose;
    }
}