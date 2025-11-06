# HexDungeon

#### Introduction
HexDungeon is a WebGL-based dungeon layout builder using Wave-Function Collapse to procedurally build a cohesive dungeon layout.

#### Goal
The goal is to build a foundational map builder to serve as the basis for a future game project in WebGL. The idea is to build the supporting systems for a hex tile, turn-based dungeon crawler with procedurally generated levels.

#### Inspiration/reference:
[Hex WFC Demo on YouTube](https://www.youtube.com/watch?v=XJCmQUnVAsE) 

| ![](img/hexmini_in.png)|
|--------|
| [Link](https://boristhebrave.github.io/DeBroglie/articles/topologies.html)  |

#### Specification:
1. Core: Single-level wave-function-collapse dungeon generator. Creates a single layer of hex grids, spaced apart according to the rules of wave-function collapse
2. Layer-stacking: We can layer these grids on top of each other, intelligently placing traversal points in between them
3. Tile-based movement: A simple player entity can traverse through the level tile-by-tile.

#### Techniques:
- Wave Function Collapse ([Descriptive Repo Example](https://github.com/mxgmn/WaveFunctionCollapse))
- Hex Grid Logic and Indexing ([RedBlob HexGrid Explainer](https://www.redblobgames.com/grids/hexagons/))
- Tile based movement

#### Design:
- The dungeon layout builder is the core of the project. After being given a target dimension by the application, it intelligently places pre-authored tiles according to a (hard-coded) rule-set.
- The application holds the WebGL guts that bind the project together, including the initialization flow which generates the dungeon, and the frame-by-frame flow which orients the game camera and moves the character.

#### Timeline:

**Milestone 1:**
- Core WebGL app is up and running, runnable in a browser.
- Core Wave-function collapse algorithm is functional, with basic conceptual tiles placed in a single layer.
- Fixed camera, no input
- Room for bugs

**Milestone 2:**
- Layer stacking is functional, allowing multiple layers to be placed on top of each other.
- Some tiles are properly authored
- Beginnings of player movement and rotating camera.
- Bugfixing and polish

**Milestone 3:**
- All tiles are authored
- Player movement and camera rotation is done
- More polish

**Final**
- Polish and bugfixing