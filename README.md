# Houdini Strawberry Plant Tool
### Design Doc
#### Introduction

I want to take this project as an opportunity to make artist-facing tools in Houdini - adjusting parameters to make an asset or a part of a scene appear naturalistic yet easily controllable without the artist having to make a model from scratch and duplicating and varying the object multiple times. Thus, I choose to make procedural strawberry plants in Houdini that allow artists to tweak parameters like strawberry size, ratio of strawberry to flowering to leaves, amount of growth, etc.


#### Goal

The goal of this project is to create a way to procedurally generate strawberry plants with artist-friendly tweakable parameters within Houdini. Perhaps there is a scene that takes place in a garden store, or a scene that takes place in a field of strawberries, and where the character is peering between the bushes - then a 3D artist might need a way to place many strawberry plants that all look different in terms of the placement of leaves, number of flowers and strawberries, yet all strawberry plants are in the same stage of ripeness in the early summer - the perfect time for strawberry picking. Being able to reduce the number of ways to create a strawberry plant to its bare essential attributes for production, such as amount of growth, number of strawberries, etc, will allow artists to easily generate lots of strawberry plants as needed, as teh game or film sees fit.

#### Inspiration/reference:
- Here are some reference photos:
![A strawberry plant with fruit](https://github.com/user-attachments/assets/9d17e283-43bd-40cb-b8db-8c48b5fa30c2)
![s-l1600](https://github.com/user-attachments/assets/7f9ba88f-1034-4659-b1fb-9bfa3ea11673)
![8338a51a986d27bfb4457e28b5d3c6ac](https://github.com/user-attachments/assets/f5ffcbcc-6892-40de-8b2b-f20649cf48c4)


- Here are some reeadings I came across that break down the structure of strawberry plants:
  - [Strawberry Plant Structure and Growth Habit ](http://www.hort.cornell.edu/expo/proceedings/2012/Berries/Berry%20Plant%20Structure%20Poling.pdf)
  - [How Strawberry Plants Grow](https://extension.umn.edu/strawberry-farming/how-strawberry-plants-grow)

#### Specification:
- The user can generate a strawberry plant with the following parameters:
    - How much/how little growth of plant (small, sparse plant, or large, bushy plant)
    - Number of strawberries in the plant
    - Number of leaf nodes
    - Number of flowers
    - Ripeness of strawberries scale
  
#### Techniques:
- What are the main technical/algorithmic tools you’ll be using? Give an overview, citing specific papers/articles.
- We will use L systems to create the stem structure of the strawberries
- Follow this tutorial to make the strawberry leaves : https://www.youtube.com/watch?v=s5RwLhmLzHM
  - The strawberry leaves will also contain adjustable parameters for leaf size/age
- Use four models of strawberries in various stages of their lives temporarily, then procedurally generate strawberries later on
  - Tutorial to potentially follow : https://www.youtube.com/watch?v=o2lqjgt4RwU
- Procedurally generate flowers in Houdini as well, following a similar workflow as the Jellyfish lab

#### Design:
<img width="1380" height="672" alt="Screenshot 2025-11-07 at 10 03 11 PM" src="https://github.com/user-attachments/assets/1faf5e89-1ccc-48e9-834a-3145365c2cc6" />

(Please imagine an actual procedurally generated strawberry is in its place)

#### Timeline:
The plan
- 11/5 - 11/12:
   - Create a workable L-system node for the stems, with dummy leaves and strawberry models that can populate on the tip of the stems by adjusting the UI parameters
   - Create the UI
- 11/12 - 11/24:
   - Create the leaves, the strawberries, and the flowers procedurally, and make sure they attach and orient correctly onto the plant. Make sure that the amount of strawberries, leaves, and flowers are easily adjustable 
- 11/26 - 12/1
   - Finishing touches - anything that needs to be fixed, make a demo-reel and also applying materials and lighting to a custom scene with the strawberries, last-minute UI changes
 
