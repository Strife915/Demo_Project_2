using UnityEngine;

namespace DemoProject2.Abstract.Patterns
{
    public abstract class SingletonMonoObject<T> : MonoBehaviour where T : SingletonMonoObject<T>
    {
        public static T Instance { get; private set; }

        protected void SetSingletonValue(T value)
        {
            if (Instance == null)
            {
                Instance = value;
            }
        }

        protected virtual void OnDestroy()
        {
            Instance = null;
        }
    }
}