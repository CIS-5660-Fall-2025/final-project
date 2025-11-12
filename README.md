# Replicate the Smoke Grenade in Counter-Strike 2 - Final Project

![](./imgs/chrome_DuYKX3Tll0.gif)

## Design Overview:

This project will implement a procedural responsive volume smoke system, replicating the behavior seen in *Counter-Strike 2*. The system will create dynamic, volumetric smoke that realistically fills spaces, interacts with the environment, and renders with high visual fidelity.

The implementation will be primarily based on the techniques demonstrated by [Acerola in "I Tried Recreating Counter Strike 2's Smoke Grenades"](https://www.youtube.com/watch?v=ryB8hT5TMSg).

## Core Features:
The implementation will include the following features:
1. Vision Block: The smoke volume will be dense enough to block player vision.
2. Space Filling: The smoke will originate from a point and expand to fill the available volume, conforming to level geometry.
3. Dynamic Interaction: The smoke will react to game events:
	- Bullets: Passing bullets will create temporary, see-through holes.
	- Explosions: Explosive grenades will create a temporary pressure wave that pushes the smoke away.

4. High-Fidelity Visuals: The smoke will be rendered with real-time lighting, self-shadowing, and detailed noise to create a realistic, non-uniform cloud [20:56], [21:15].

5. Physical Dynamics: The smoke will exhibit physically-guided behavior, such as a slow downward drift over time

## The Plan
The system is broken into three main components: static scene processing, real-time simulation, and real-time rendering.

### Scene Voxelization (Milestone 1)

The static level geometry will be backed into a 3D voxel grid. It will output a 3D texture or compute buffer where each cell stores a binary value (e.g., `1` for solid, `0` for empty space). This grid defines the boundaries for the smoke simulation.

### Smoke Simulation & Rendering Ⅰ (Milestone 2)

 A **"Limited Flood Fill"** algorithm will be used to handle the smoke's expansion and dynamics. When a grenade detonates, its origin voxel is "seeded" with a maximum energy value. In each simulation step, "energy" propagates to adjacent, empty (non-static) voxels. The new voxel's energy is set to `max(neighbor_energy) - 1`. 

A ray will be marched from the camera through the scene. At each step, the shader will sample the smoke density from the simulation grid. Density is integrated according to **Beer's Law** to calculate light absorption.  To calculate lighting, a second, cheaper ray march is performed from the current sample point towards the sun (light source). This determines how much light reaches that point, creating self-shadowing.

### Smoke Rendering Ⅱ & Interaction (Final Submission)

Some 3D noise is sampled during the ray march. The noise is combined with the energy value from the flood fill. Density will fall off near the "edge" (where energy is low), using the noise to create detailed, wispy edges. A list of active holes (position, direction, timer) is maintained on the CPU and sent to the GPU. An easing function expands the hole and then slowly shrinks it. If the sample point is inside a hole's SDF, density is set to 0.

## Topic Suggestions

### Create a generator in Houdini

### A CLASSIC 4K DEMO
- In the spirit of the demo scene, create an animation that fits into a 4k executable that runs in real-time. Feel free to take inspiration from the many existing demos. Focus on efficiency and elegance in your implementation.
- Example: 
  - [cdak by Quite & orange](https://www.youtube.com/watch?v=RCh3Q08HMfs&list=PLA5E2FF8E143DA58C)

### A RE-IMPLEMENTATION
- Take an academic paper or other pre-existing project and implement it, or a portion of it.
- Examples:
  - [2D Wavefunction Collapse Pokémon Town](https://gurtd.github.io/566-final-project/)
  - [3D Wavefunction Collapse Dungeon Generator](https://github.com/whaoran0718/3dDungeonGeneration)
  - [Reaction Diffusion](https://github.com/charlesliwang/Reaction-Diffusion)
  - [WebGL Erosion](https://github.com/LanLou123/Webgl-Erosion)
  - [Particle Waterfall](https://github.com/chloele33/particle-waterfall)
  - [Voxelized Bread](https://github.com/ChiantiYZY/566-final)

### A FORGERY
Taking inspiration from a particular natural phenomenon or distinctive set of visuals, implement a detailed, procedural recreation of that aesthetic. This includes modeling, texturing and object placement within your scene. Does not need to be real-time. Focus on detail and visual accuracy in your implementation.
- Examples:
  - [The Shrines](https://github.com/byumjin/The-Shrines)
  - [Watercolor Shader](https://github.com/gracelgilbert/watercolor-stylization)
  - [Sunset Beach](https://github.com/HanmingZhang/homework-final)
  - [Sky Whales](https://github.com/WanruZhao/CIS566FinalProject)
  - [Snail](https://www.shadertoy.com/view/ld3Gz2)
  - [Journey](https://www.shadertoy.com/view/ldlcRf)
  - [Big Hero 6 Wormhole](https://2.bp.blogspot.com/-R-6AN2cWjwg/VTyIzIQSQfI/AAAAAAAABLA/GC0yzzz4wHw/s1600/big-hero-6-disneyscreencaps.com-10092.jpg)

### A GAME LEVEL
- Like generations of game makers before us, create a game which generates an navigable environment (eg. a roguelike dungeon, platforms) and some sort of goal or conflict (eg. enemy agents to avoid or items to collect). Aim to create an experience that will challenge players and vary noticeably in different playthroughs, whether that means procedural dungeon generation, careful resource management or an interesting AI model. Focus on designing a system that is capable of generating complex challenges and goals.
- Examples:
  - [Rhythm-based Mario Platformer](https://github.com/sgalban/platformer-gen-2D)
  - [Pokémon Ice Puzzle Generator](https://github.com/jwang5675/Ice-Puzzle-Generator)
  - [Abstract Exploratory Game](https://github.com/MauKMu/procedural-final-project)
  - [Tiny Wings](https://github.com/irovira/TinyWings)
  - Spore
  - Dwarf Fortress
  - Minecraft
  - Rogue

### AN ANIMATED ENVIRONMENT / MUSIC VISUALIZER
- Create an environment full of interactive procedural animation. The goal of this project is to create an environment that feels responsive and alive. Whether or not animations are musically-driven, sound should be an important component. Focus on user interactions, motion design and experimental interfaces.
- Examples:
  - [The Darkside](https://github.com/morganherrmann/thedarkside)
  - [Music Visualizer](https://yuruwang.github.io/MusicVisualizer/)
  - [Abstract Mesh Animation](https://github.com/mgriley/cis566_finalproj)
  - [Panoramical](https://www.youtube.com/watch?v=gBTTMNFXHTk)
  - [Bound](https://www.youtube.com/watch?v=aE37l6RvF-c)

### YOUR OWN PROPOSAL
- You are of course welcome to propose your own topic . Regardless of what you choose, you and your team must research your topic and relevant techniques and come up with a detailed plan of execution. You will meet with some subset of the procedural staff before starting implementation for approval.
