using System.Collections.Generic;
using DemoProject2.Abstract.Patterns;
using DemoProject2.Enums;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace DemoProject2.Building
{
public class GridBuildingSystem : SingletonMonoObject<GridBuildingSystem>
{
    
    public GridLayout gridLayout; //Grid Object
    public Tilemap MainTilemap; //Main tilemap - for checking placement availability
    public Tilemap TempTilemap; //Temp tilemap - to indicate where the building is now

    //all tile types - white, green, red
    private static Dictionary<TileType, TileBase> tileBases = new Dictionary<TileType, TileBase>();

    //to keep track of the current building
    private Building temp; //building itself
    private BoundsInt prevArea; //to clear the area it was standing on
    
    #region Unity Methods

    private void Awake()
    {
        SetSingletonValue(this);
    }

    private void Start()
    {
        string tilePath = "Tiles/";
        tileBases.Add(TileType.Empty, null);
        tileBases.Add(TileType.White, Resources.Load<TileBase>(tilePath + "White"));
        tileBases.Add(TileType.Red, Resources.Load<TileBase>(tilePath + "Red"));
        tileBases.Add(TileType.Green, Resources.Load<TileBase>(tilePath + "Green"));
    }

    private void Update()
    {
        if (!temp)
        {
            return;
        }
        
        //I chose Space bar to confirm house placement
        if (Input.GetKeyDown(KeyCode.Space))
        {
            //check if we can place here
            if (temp.CanBePlaced())
            {
                //yes, we can
                temp.Place();
            }
        }
        //Escape button to cancel the building placement
        else if (Input.GetKeyDown(KeyCode.Escape))
        {
            //clear the area the building was standing on
            ClearArea();
            //destroy the building object
            Destroy(temp.gameObject);
        }
    }

    #endregion

    #region Tilemap management
    
    /*
     * Gets an array of tiles from the tilemap
     *
     * UNITY'S METHOD GetTilesBlock CAUSES EDITOR CRASH
     * (at least in my case)
     * 
     * BoundsInt area - tiles come from this area;
     * it has a position on the tilemap and size (2, 2, 1) etc.
     * Tilemap tilemap - tilemap from which we get tiles
     *  @returns an array of TilesBase
     *
     * Use this method when we check if area under the house is available
     * (white TileBase means available)
     */
    private static TileBase[] GetTilesBlock(BoundsInt area, Tilemap tilemap)
    {
        //create an array to store the tiles
        TileBase[] array = new TileBase[area.size.x * area.size.y * area.size.z];
        int counter = 0;
        
        //go through each position from the area
        foreach (var v in area.allPositionsWithin)
        {
            //store position and change z position to 0 - needed to get the right "layer" of tiles
            Vector3Int pos = new Vector3Int(v.x, v.y, 0);
            //get TileBase from that position
            array[counter] = tilemap.GetTile(pos);
            counter++;
        }
        
        return array;
    }
    
    /*
     * Sets TileBases on a tilemap
     * BoundsInt area - tiles set on this area;
     * it has a position on the tilemap and size (2, 2, 1) etc.
     * TileType - which tiles to set (white, green or blue)
     * Tilemap tilemap - tilemap on which we set tiles
     */
    private static void SetTilesBlock(BoundsInt area, TileType type, Tilemap tilemap)
    {
        //create an array to store the tiles
        TileBase[] tileArray = new TileBase[area.size.x * area.size.y * area.size.z];
        //fill this array with TileBases of the chosen type
        FillTiles(tileArray, type);
        //set the tiles on the tilemap
        tilemap.SetTilesBlock(area, tileArray);
    }
    
    /*
     * Fills an array of tiles with the chosen TileType
     */
    private static void FillTiles(TileBase[] arr, TileType type)
    {
        //go through each tile and set it from TileBases dictionary
        for (int i = 0; i < arr.Length; i++)
        {
            arr[i] = tileBases[type];
        }
    }
    
    #endregion

    #region Building Placement

    /*
     * Initialize the system with a building prefab
     * GameObject building - prefab
     */
    public void InitializeWithBuilding(GameObject building)
    {
        //calculate the position for the house; in the center (Vector3.zero),
        //with an offset (Vector3(.5f, .5f, 0f))
        Vector3 position = gridLayout.CellToLocalInterpolated(new Vector3(.5f, .5f, 0f));
        //initialize current building
        temp = Instantiate(building, position, Quaternion.identity).GetComponent<Building>();
        //highlight the area under it
        FollowBuilding();
    }

    /*
     * Set previous area that the house was standing on to empty
     */
    private void ClearArea()
    {
        //create an array to store the tiles
        TileBase[] toClear = new TileBase[prevArea.size.x * prevArea.size.y * prevArea.size.z];
        //fill the array with empty tiles
        FillTiles(toClear, TileType.Empty);
        //set the tiles on the temporary tilemaps
        TempTilemap.SetTilesBlock(prevArea, toClear);
    }

    /*
     * Highlight the area under the building (on the Temporary tilemap)
     */
    public void FollowBuilding()
    {
        //clear the previously highlighted area
        ClearArea();

        //calculate the position of the area
        temp.area.position = gridLayout.WorldToCell(temp.gameObject.transform.position);
        //save the area
        BoundsInt buildingArea = temp.area;

        //get the tiles from the MainTilemap to determine with what color to highlight it
        TileBase[] baseArray = GetTilesBlock(buildingArea, MainTilemap);

        int size = baseArray.Length;
        //create an array to store the tiles
        TileBase[] tileArray = new TileBase[size];

        for (int i = 0; i < baseArray.Length; i++)
        {
            //white TileBase - tile available
            if (baseArray[i] == tileBases[TileType.White])
            {
                //placement possible, highlight tiles green
                tileArray[i] = tileBases[TileType.Green];
            }
            else
            {
                //not a white tile - placement not possible, highlight tiles red
                FillTiles(tileArray, TileType.Red);
                break;
            }
        }
        
        //set the tiles on the temporary tilemap (highlight the area)
        TempTilemap.SetTilesBlock(buildingArea, tileArray);
        prevArea = buildingArea;
    }

    /*
     * Check if an area is available for placement
     * BoundsInt area - area to check
     */
    public bool CanTakeArea(BoundsInt area)
    {
        //get TileBases from the Main tilemap at this area
        TileBase[] baseArray = GetTilesBlock(area, MainTilemap);
        //check each TileType
        foreach (var b in baseArray)
        {
            if (b != tileBases[TileType.White])
            {
                //not white = not available
                Debug.Log("Cannot place here");
                return false;
            }
        }

        return true;
    }

    /*
     * Take the area for a building
     */
    public void TakeArea(BoundsInt area)
    {
        //clear the highlighted area under the building 
        SetTilesBlock(area, TileType.Empty, TempTilemap);
        //set the tiles on the Main tilemap to indicate that the area is taken
        SetTilesBlock(area, TileType.Green, MainTilemap);
    }
    
    #endregion
}

//types of tiles
}
