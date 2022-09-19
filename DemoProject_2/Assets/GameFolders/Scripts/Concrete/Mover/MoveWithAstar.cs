using DemoProject2.Abstract.Mover;
using DemoProject2.ScriptableObjects;
using Pathfinding;
using UnityEngine;

namespace DemoProject2.Controllers
{
    public class MoveWithAstar : IMover
    {
        AIDestinationSetter _aiDestinationSetter;
        AIPath _aiPath;
        Transform _target;

        public MoveWithAstar(AIDestinationSetter aiDestinationSetter, AIPath aiPath, Transform target,
            ISoldierStats stats)
        {
            _aiDestinationSetter = aiDestinationSetter;
            _aiPath = aiPath;
            _target = target;
            _aiPath.maxSpeed = stats.MoveSpeed;
        }

        public void Move()
        {
            _aiPath.canMove = true;
        }

        public void SetTarget(Transform transform)
        {
            _aiDestinationSetter.target = transform;
        }
    }

    public class AstarObjectAnimationController : IAnimatonController
    {
        public Animator Animator { get; }

        public void UpdateSprite()
        {
        }
    }

    public interface IAnimatonController
    {
        public Animator Animator { get; }
        void UpdateSprite();
    }
}