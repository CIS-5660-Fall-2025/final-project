# Virtual Aquarium — Plants Starter (WebGL2)

This is a lightweight starter you can drop into your repo for the **plants** portion of your WebGL virtual aquarium. It renders hundreds of **sea grass/kelp blades** as instanced ribbons with a vertex-shader sway, simple caustics, and basic UI.

## Run locally

Use any static server:
```sh
python -m http.server 5173
# then open http://localhost:5173/mnt/data/aquarium-plants-starter/index.html
```
(or use your team's dev server; just serve `index.html` at the project root)

## Files

- `index.html` — canvas + tiny control panel
- `src/main.js` — WebGL2 setup, instanced rendering, interactions
- `src/shaders.js` — vertex/fragment shaders for the seaweed ribbons

## How it works (quick tour)

- **Instancing**: We build one ribbon mesh (a vertical strip with ~22 segments) and draw many instances with per-blade attributes: base position, height, phase, amplitude, hue.
- **Motion**: The vertex shader computes a bend value per-vertex using `sin(phase + t * 2π + time)`, scaled by a tip-weight `pow(t, flex)`. A secondary wobble term breaks uniformity.
- **Current**: A uniform `u_currentDir` + `u_currentStrength` control flow direction & strength. Hold the mouse to push plants away from the cursor.
- **Colors**: Per-instance hue drives a base→tip gradient in the shader.
- **Performance**: With instancing, a few hundred blades is trivial; 1000+ is fine on most laptops.

## Next steps / stretch ideas

- **Variety**: Add different species (broad kelp fronds, short eelgrass). Use another instanced mesh with different parameters.
- **Lighting**: Replace the fake caustics stripes with a scrolling caustics texture (sampler2D + additive light) or post-process on a full-screen quad.
- **Interactions**: Click to plant seeds anywhere; let fish stir the current; add a global “surge” with a low-frequency sinusoid.
- **Collision** *(optional)*: Add a simple constraint so fronds bend when fish swim through (GPU: SSBO/TF; CPU: cheap proximity push).

## Integrating into your project

- Import these files into your branch (or copy `src/` under your module path).
- If your project is TypeScript/Vite, convert `main.js`/`shaders.js` to TS modules and tweak types on WebGL2 calls.
- Hook the `u_current*` uniforms to your aquarium's global environment state so plants and fish react to the same water motion.

Happy planting 🌿


---

## NPM / Vite workflow

1) Install deps (once):
```bash
npm install
```

2) Start dev server (hot reload):
```bash
npm start
# or: npm run dev
```

3) Build for prod:
```bash
npm run build
npm run preview   # serve the built files locally to test
```
