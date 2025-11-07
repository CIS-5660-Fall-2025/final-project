using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WFC : MonoBehaviour
{
    public Vector2Int mapDimensions;
    public float cellWidth;
    public Tile[] tileTypes; // TODO what type? also better name
    
    int iteration;
    Cell[,] grid;

    // Start is called before the first frame update
    void Start()
    {
        iteration = 0;
        // Instantiate(tileTypes[0]);
        // Instantiate(tileTypes[0],new Vector3(2.0f, 2.0f, 2.0f), Quaternion.identity);
        Cell defaultCell = new Cell();
        defaultCell.possibleTiles = tileTypes.ToList();
        grid = new Cell[mapDimensions.x, mapDimensions.y];

        for (int y = 0; y < mapDimensions.y; ++y) {
            for (int x = 0; x < mapDimensions.x; ++x) {
                // Instantiate(tileTypes[Random.Range(0,tileTypes.Length)], new Vector3(x * cellWidth, 0.0f, y * cellWidth), Quaternion.identity);
                grid[x,y] = defaultCell;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void runStep() {

    }
}
