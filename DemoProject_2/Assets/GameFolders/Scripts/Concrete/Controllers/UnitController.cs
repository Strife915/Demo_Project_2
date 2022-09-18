using System.Collections.Generic;
using System.Linq;
using DemoProject2.Abstract.Controlable;

namespace DemoProject2.Controllers
{
    public class UnitController
    {
        public HashSet<IClickable> objects;

        public UnitController()
        {
            objects = new HashSet<IClickable>();
        }

        public void AddToCommandList(IClickable obj)
        {
            objects.Add(obj);
            obj.OnClick();
        }

        public void ClearCommandList()
        {
            if (!objects.Any()) return;
            foreach (IClickable obj in objects)
            {
                obj.OnRealse();
            }

            objects.Clear();
        }

        public void CommandAllUnits()
        {
            foreach (IClickable obj in objects)
            {
                obj.OnCommand();
            }
        }
    }
}