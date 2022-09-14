using UnityEngine;

namespace DemoProject2.Building
{
public class Building : MonoBehaviour
{
    //if the building is placed or not
    public  bool Placed { get; private set; }
    //area under the house - stores position and building size
    public BoundsInt area;

    #region Movement
    //initial position of the click
    private Vector3 startPos;
    //offset from the click position to the center 
    private float deltaX, deltaY;
    
    private void OnMouseDown()
    {
        //only respond if the building is not placed
        if (!Placed)
        {
            //save the position
            startPos = Input.mousePosition;
            //convert it to world point
            startPos = Camera.main.ScreenToWorldPoint(startPos);
        
            //calculate the offset
            deltaX = startPos.x - transform.position.x;
            deltaY = startPos.y - transform.position.y;
        }
    }

    private void OnMouseDrag()
    {
        //only respond if the building is not placed
        if (!Placed)
        {
            //current mouse position in world space
            Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            //set the position of the house; we need to subtract the deltas to make the movement smooth
            transform.position = new Vector3(mousePos.x - deltaX, mousePos.y - deltaY, 0);
            //highlight the new area
            GridBuildingSystem.current.FollowBuilding();
        }
    }

    private void OnMouseUp()
    {
        //only respond if the building is not placed
        if (!Placed)
        {
            //convert current building position to tile position
            Vector3Int cellPosition = GridBuildingSystem.current.gridLayout.LocalToCell(transform.position);
            //snap the house to grid
            transform.localPosition = GridBuildingSystem.current.gridLayout.
                CellToLocalInterpolated(cellPosition + new Vector3(.5f, .5f, 0f));
        }
    }

    #endregion
    
    #region Build Methods

    /*
     * Check if the building can be placed at its current position
     */
    public bool CanBePlaced()
    {
        //create an area under the building
        Vector3Int positionInt = GridBuildingSystem.current.gridLayout.LocalToCell(transform.position);
        BoundsInt areaTemp = area;
        areaTemp.position = positionInt;

        //call the GridBuildingSystem to check the area
        if (GridBuildingSystem.current.CanTakeArea(areaTemp))
        {
            return true;
        }

        return false;
    }

    /*
     * Make the building placed
     */
    public void Place()
    {
        //create an area under the building
        Vector3Int positionInt = GridBuildingSystem.current.gridLayout.LocalToCell(transform.position);
        BoundsInt areaTemp = area;
        areaTemp.position = positionInt;
        
        Placed = true;
        
        //call the GridBuildingSystem to take the area
        GridBuildingSystem.current.TakeArea(areaTemp);
    }
    
    #endregion
}
    
}
