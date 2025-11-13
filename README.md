CIS 5660 Fall 2025 Final Project - Avi Serebrenik and Daniel Gerhardt

### Progress Updates

#### Milestone 1

**Music Analysis:**
It turns out that the Essentia audio analysis program is not fully supported in Windows, even though it is C++.
After trying various methods, we found an executable that we can simply run from within UE5, which is what we currently use.
With the .exe method, we have added music analysis of any music file as a load step, and we currently read BPM at runtime.

**Level Generation:**

Currently, we are spawning terrain tiles progressively in front of the player, and collapse behind them. They are linked to the BPM via color, so they flash green on the beat of the song. Also, the player has been set up with no camera controls and only left/right movement with jumping. This is to emulate the controls of games like run. We are also playing the song so you can hear the beats as the terrain changes with them. Piping has been set up using the Geometry Scripting plugin to have real time Boolean operations on the terrain, so we can punch holes in the ground in time with the song or relate their shape to attributes of the music.

### Design Doc

#### Introduction

As fans of music, cool math games, and procedural terrain generation, we decided on this project to merge these together. At its core, this Unreal Engine game is a modern-day procedural music-based version of the classic cool math game, [Run 3](https://www.coolmathgames.com/0-run-3). For those unfamiliar, this is an infinite runner platformer, where players run in a tube with holes in it. For our version, the gameplay speed and hole generation are procedurally generated based on the played music.

#### Goal

* Integrate music into the game in a fun way
* Drive procedural generation with music input
* Get visuals that are related to the music
* Allow users to input their own music
* Make a fun game

#### Inspiration/reference:

* [Run 3](https://www.coolmathgames.com/0-run-3)
* [Bullets Per Minute](https://store.steampowered.com/app/1286350/BPM_BULLETS_PER_MINUTE/)
* [Crypt of the Necrodancer](https://store.steampowered.com/app/247080/Crypt_of_the_NecroDancer/)
* [Danny DeVito](https://www.google.com/url?sa=i&url=https%3A%2F%2Fen.wikipedia.org%2Fwiki%2FDanny_DeVito&psig=AOvVaw1gr3XL6LeD3Bhxd9edU2f6&ust=1762273564648000&source=images&cd=vfe&opi=89978449&ved=0CBYQjRxqFwoTCKjN_N-y1pADFQAAAAAdAAAAABAE)
* [Weezer](https://www.walmart.com/ip/Van-Camp-s-Pork-and-Beans-Canned-Beans-114-oz/10307919)
* Bill Evans, who once said, “Jazz is the art of spontaneous creation in the moment.”

#### Specification:

* An infinite tunnel with holes to run and jump in.
* Player character who runs and jumps.
* Unreal Engine
* Linking audio analysis library, [Essentia](https://essentia.upf.edu/documentation.html)
* Connecting all these assets.

#### Techniques:

* Unreal Engine, which is the main engine that will drive the actual gameplay.
* [Essentia](https://essentia.upf.edu/documentation.html), which is an open source C++ audio analysis library. It will help us get information out of audio files.
* Procedural 3D noise to generate the holes - probably using Perlin noise.

#### Design:

* The high-level view of our program is quite linear.
* First, we have Unreal Engine, where we have the player behavior, play the music, and place the terrain.
* Next, we have the terrain generator, which plugs into Unreal directly to tell it what terrain to place/the form of it.
* Next, we have the audio analysis code, which plugs into the terrain generator code to influence its behavior.
* Finally, Unreal Game logic also connects a little to the audio analysis, so they can communicate about what song is played, the current time, etc.

#### Timeline:

* **Milestone 1 (11/12):** A basic MVP, which is an infinite runner with randomized holes, and possibly the background color changing by the music, so we have some basic logic connected to the analysis.

  * Setting up base Unreal Engine game logic (Dan).
  * Setting up base music analysis with outputs (Avi).

* **Milestone 2 (11/24):** Adding the music to the level generation, which is the hardest part. Polishing everything. Adding UI features to load songs, change music, etc.

  * Music driven noise (Avi)
  * Unreal UI with added logic (Dan)
  * Polish (Avi and Dan)

* **Final Submissions (12/1):** Full polished game with powerups that influence music behavior.

  * Powerups (Dan and Avi)
  * Polish (Avi and Dan)
  * Funkier ideas (Dan and Avi and Dan)
