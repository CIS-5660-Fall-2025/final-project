# Final Project!

This is it! The culmination of your procedural graphics experience this semester. For your final project, we'd like to give you the time and space to explore a topic of your choosing. You may choose any topic you please, so long as you vet the topic and scope with an instructor or TA. We've provided some suggestions below. The scope of your project should be roughly 1.5 homework assignments). To help structure your time, we're breaking down the project into 4 milestones:

## Project planning: Design Doc (due 11/5)
### Design Doc
#### Introduction
We’re excited by the idea of procedurally generating assets that can amplify the visual impact of our GPU final project, real time cloud generation. Because a big focus of that final project is collisions, we’d like to make assets here that can highlight that functionality. We think that floating cloud rocks and foliage, and procedurally animated fauna flying between those assets and the GPU clouds, would look incredible!

#### Goal
We aim to create high-quality floating island assets with procedurally animated birds that react to them. These assets, along with supporting elements like a skybox, will be assembled into a cohesive demo scene. By juxtaposing the islands and the birds, we hope to convey a strong sense of scale and enhance the visual impact of our scene. 

#### Inspiration/reference:
- Avatar
  - https://www.youtube.com/watch?v=YfK6CNTAG7o
- RIVEN architecture
  - https://www.youtube.com/watch?v=JumtB_YY2I4

#### Specification:
- Houdini Floating Terrain Generation
  - Rock architecture
  - Vines
  - Foliage, Trees
- Basic Architecture
  - Homes
  - Bridges
- Birds
  - Extra Credit: Custom Bird Generation
  - Procedural Animation:
    - Flocking
    - Obstacle Avoidance
    - Triangle Leader Following

#### Techniques:
- [Ivy Tool](https://www.sidefx.com/tutorials/project-titan-ivy-tool/) 
- [Vines Generation](https://www.youtube.com/watch?v=3u6UNNJQ_cM)
- [Procedural Rock Generation](https://www.sidefx.com/tutorials/proc-rocks-using-vops/)
- [Bird Flight Modeling](https://grail.cs.washington.edu/projects/flight/wu2003realistic.pdf)
- Boids, Leader Following, Obstacle Avoidance

#### Design:
<img width="405" height="416" alt="image" src="https://github.com/user-attachments/assets/a7aa48b4-8126-4e35-9e97-08cc9878c9d3" />

#### Timeline:
- Week 1
  - Floating islands base and procedural ivies 
  - Basic Birds Modeling
- Week 2 
  - Vines between floating islands 
  - Bird Flying Animations
- Week 3 
  - Riven style architecture on islands
  - Bird Behavioral Animations
- Week 4
  - Polish architecture and add more foliage 
  - Birds in engine with terrain

## Milestone 1



https://github.com/user-attachments/assets/ba4b1430-0102-4c41-aac1-231499145be9

Progress:

Programmed some flocking behavior into houdini, using several POP forces!
Next step there will be to tie bird animation to the particle state and to add obstacle avoidance.


<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/f416693e-6145-4759-a5c8-610ae4503def" />

Progress: 

Created base for procedural floating islands. The next step would be adding vegeatation, structures, etc. to enrich the island's visuals. 

## Milestone 2: Implementation part 2 (due 11/24)
We're over halfway there! This week should be about fixing bugs and extending the core of your generator. Make sure by the end of this week _your generator works and is feature complete._ Any core engine features that don't make it in this week should be cut! Don't worry if you haven't managed to exactly hit your goals. We're more interested in seeing proof of your development effort than knowing your planned everything perfectly. 

Put all your code in your forked repository.

Submission: Add a new section to your README titled: Milestone #3, which should include
- written description of progress on your project goals. If you haven't hit all your goals, what did you have to cut and why? 
- Detailed output from your generator, images, video, etc.
We'll check your repository for updates. No need to create a new pull request.

Come to class on the due date with a WORKING COPY of your project. We'll be spending time in class critiquing and reviewing your work so far.

## Final submission (due 12/1)
Time to polish! Spen this last week of your project using your generator to produce beautiful output. Add textures, tune parameters, play with colors, play with camera animation. Take the feedback from class critques and use it to take your project to the next level.

Submission:
- Push all your code / files to your repository
- Come to class ready to present your finished project
- Update your README with two sections 
  - final results with images and a live demo if possible
  - post mortem: how did your project go overall? Did you accomplish your goals? Did you have to pivot?

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
