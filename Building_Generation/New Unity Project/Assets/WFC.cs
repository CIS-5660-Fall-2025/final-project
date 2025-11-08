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
        // Cell defaultCell = new Cell();
        // defaultCell.possibleTiles = new List<Tile>(tileTypes);
        grid = new Cell[mapDimensions.x, mapDimensions.y];

        for (int y = 0; y < mapDimensions.y; ++y) {
            for (int x = 0; x < mapDimensions.x; ++x) {
                // Instantiate(tileTypes[Random.Range(0,tileTypes.Length)], new Vector3(x * cellWidth, 0.0f, y * cellWidth), Quaternion.identity);
                
                grid[x,y] = new Cell();
                grid[x,y].possibleTiles = new List<Tile>(tileTypes);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        runStep();
        // Debug.Log(runStep());
    }

    bool runStep() {
        // TODO probably better way to pick order
        Cell targetCell = new Cell();
        int leastCount = int.MaxValue;
        ++iteration;
        Vector2Int targetCoords = new Vector2Int(0,0);
        // TODO this is the super-naive version of entropy check; can improve
        // also might eventually need to add e.g. backtracking
        for (int y = 0; y < mapDimensions.y; ++y) {
            for (int x = 0; x < mapDimensions.x; ++x) {
                int len = grid[x,y].possibleTiles.Count;
                if (leastCount > len && len > 1) {
                    leastCount = len;
                    targetCell = grid[x,y];
                    targetCoords = new Vector2Int(x,y);
                }
            }
        }
        if (leastCount != int.MaxValue) {
            // found a target cell
            
            int targetTileIdx = Random.Range(0,targetCell.possibleTiles.Count);
            Tile chosenTile = targetCell.possibleTiles[targetTileIdx];
            targetCell.possibleTiles = new List<Tile>{chosenTile};
            Vector3 targetPos = new Vector3(targetCoords.x,0,targetCoords.y);
            Instantiate(chosenTile, targetPos, Quaternion.identity);

            // TODO propagate; probably helper function in this class is best way?
            propagate(targetCoords.x, targetCoords.y, true); // TODO 
            return true;
        }
        
        return false;
    }

    void propagate(int x, int y, bool start) {
        // check neighbors to update this cell's possibilities
        // if updated or if start (since start we already changed), repeat on cell's neigbhors
        // is that it?

        // TODO I don't think is correct yet but need to experiment

        if (grid[x,y].possibleTiles.Count <= 1) {
            // TODO might need to make sure never get 0 case
            return;
        }
        
        bool possibilitiesUpdated = false;
        if (start) {
            possibilitiesUpdated = true;
        } else {
            foreach(Tile t in grid[x,y].possibleTiles) {
                if (x < mapDimensions.x - 1) {
                    bool validNeighbor = false;
                    // if the x+1,y cell is able to contain a tile that is a potential neighbor to this tile, it's fine
                    foreach(Tile n in t.neighborsXPos) {
                        // TODO I don't recall if contains works the way I want for how objects work in Unity/C#, will need to test
                        if (grid[x+1,y].possibleTiles.Contains(n)) {
                            validNeighbor = true;
                            break;
                        }
                    }
                    if (!validNeighbor) {
                        grid[x,y].possibleTiles.Remove(t);
                        possibilitiesUpdated = true;
                        break;
                    }
                }

                if (x > 0) {
                    bool validNeighbor = false;
                    // if the x+1,y cell is able to contain a tile that is a potential neighbor to this tile, it's fine
                    foreach(Tile n in t.neighborsXNeg) {
                        // TODO I don't recall if contains works the way I want for how objects work in Unity/C#, will need to test
                        if (grid[x-1,y].possibleTiles.Contains(n)) {
                            validNeighbor = true;
                            break;
                        }
                    }
                    if (!validNeighbor) {
                        grid[x,y].possibleTiles.Remove(t);
                        possibilitiesUpdated = true;
                        break;
                    }
                }

                if (y < mapDimensions.y - 1) {
                    bool validNeighbor = false;
                    // if the x+1,y cell is able to contain a tile that is a potential neighbor to this tile, it's fine
                    foreach(Tile n in t.neighborsZPos) {
                        // TODO I don't recall if contains works the way I want for how objects work in Unity/C#, will need to test
                        if (grid[x,y+1].possibleTiles.Contains(n)) {
                            validNeighbor = true;
                            break;
                        }
                    }
                    if (!validNeighbor) {
                        grid[x,y].possibleTiles.Remove(t);
                        possibilitiesUpdated = true;
                        break;
                    }
                }

                if (y > 0) {
                    bool validNeighbor = false;
                    // if the x+1,y cell is able to contain a tile that is a potential neighbor to this tile, it's fine
                    foreach(Tile n in t.neighborsZNeg) {
                        // TODO I don't recall if contains works the way I want for how objects work in Unity/C#, will need to test
                        if (grid[x,y-1].possibleTiles.Contains(n)) {
                            validNeighbor = true;
                            break;
                        }
                    }
                    if (!validNeighbor) {
                        grid[x,y].possibleTiles.Remove(t);
                        possibilitiesUpdated = true;
                        break;
                    }
                }
            }
        }
        if (possibilitiesUpdated) {
            propagate(x+1,y,false);
            propagate(x-1,y,false);
            propagate(x,y+1,false);
            propagate(x,y-1,false);
        }
    }
}
