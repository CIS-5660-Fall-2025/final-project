// src/main.js
import { createEgeriaLayer } from "./plants/egeriaDensa.js";
import { createGrassLayer } from "./plants/grass.js";
import { createFloorLayer } from "./tank/tankFloor.js";

function createGL(canvas) {
  const gl = canvas.getContext("webgl2", { antialias: true, alpha: false });
  if (!gl) throw new Error("WebGL2 not supported");
  return gl;
}
function resizeCanvasToDisplaySize(canvas) {
  const dpr = Math.min(window.devicePixelRatio || 1, 2);
  const w = Math.floor(canvas.clientWidth * dpr);
  const h = Math.floor(canvas.clientHeight * dpr);
  if (canvas.width !== w || canvas.height !== h) {
    canvas.width = w;
    canvas.height = h;
    return true;
  }
  return false;
}

function makePerspective(fovDeg, aspect, near, far) {
  const f = 1 / Math.tan((fovDeg * Math.PI) / 180 / 2);
  return new Float32Array([
    f / aspect,
    0,
    0,
    0,
    0,
    f,
    0,
    0,
    0,
    0,
    (far + near) / (near - far),
    -1,
    0,
    0,
    (2 * far * near) / (near - far),
    0,
  ]);
}

function lookAt(eye, center, up) {
  const ex = eye[0],
    ey = eye[1],
    ez = eye[2];
  const cx = center[0],
    cy = center[1],
    cz = center[2];
  const ux = up[0],
    uy = up[1],
    uz = up[2];
  let zx = ex - cx,
    zy = ey - cy,
    zz = ez - cz;
  const zlen = Math.hypot(zx, zy, zz);
  zx /= zlen;
  zy /= zlen;
  zz /= zlen;
  let xx = uy * zz - uz * zy,
    xy = uz * zx - ux * zz,
    xz = ux * zy - uy * zx;
  const xlen = Math.hypot(xx, xy, xz);
  xx /= xlen;
  xy /= xlen;
  xz /= xlen;
  const yx = zy * xz - zz * xy,
    yy = zz * xx - zx * xz,
    yz = zx * xy - zy * xx;
  return new Float32Array([
    xx,
    yx,
    zx,
    0,
    xy,
    yy,
    zy,
    0,
    xz,
    yz,
    zz,
    0,
    -(xx * ex + xy * ey + xz * ez),
    -(yx * ex + yy * ey + yz * ez),
    -(zx * ex + zy * ey + zz * ez),
    1,
  ]);
}

// 2D
// function makeProjection(width, height) {
//   const aspect = width / height;
//   const scale = 1.6;
//   const left = -aspect * scale, right = aspect * scale;
//   const bottom = 0.0, top = 2.0 * scale;
//   const near = -10, far = 10;
//   return new Float32Array([
//     2/(right-left),0,0,0,
//     0,2/(top-bottom),0,0,
//     0,0,-2/(far-near),0,
//     -(right+left)/(right-left),-(top+bottom)/(top-bottom),-(far+near)/(far-near),1
//   ]);
// }

const identity = new Float32Array([
  1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
]);

const canvas = document.getElementById("gl");
const gl = createGL(canvas);
gl.enable(gl.DEPTH_TEST);
gl.clearColor(0.02, 0.07, 0.13, 1);

// Layers
const floor = createFloorLayer(gl);
const grass = createGrassLayer(gl);
const egeria = createEgeriaLayer(gl);

const FOG = { color: [0.02, 0.07, 0.13], near: 2.0, far: 5.5 };
floor.setFog(FOG.color, FOG.near, FOG.far);

// ---------- UI wiring
const fpsEl = document.getElementById("fps");

const showGrass = document.getElementById("showGrass");
const showEgeria = document.getElementById("showEgeria");

const currentStrength = document.getElementById("currentStrength");
const currentAngle = document.getElementById("currentAngle");

// Existing grass controls
const plantCount = document.getElementById("plantCount"); // grass
const plantCountLabel = document.getElementById("plantCountLabel");
const flex = document.getElementById("flex"); // grass tip flexibility
const heightAvg = document.getElementById("height"); // grass avg height

// Egeria controls
const egCount = document.getElementById("egeriaCount");
const egWidth = document.getElementById("egeriaLeafWidth");
const egNodes = document.getElementById("egeriaNodes");
const egBranch = document.getElementById("egeriaBranch");

const scatterBtn = document.getElementById("scatter");
const regenBtn = document.getElementById("regenerate");

// Init UI state -> layers
function scatterAll() {
  grass.regenerate();
  egeria.regenerate();
}
function updateCountLabel() {
  if (plantCountLabel) plantCountLabel.textContent = String(plantCount.value);
}
updateCountLabel();

if (plantCount)
  plantCount.addEventListener("input", () => {
    grass.setCount(+plantCount.value);
    updateCountLabel();
    grass.regenerate();
  });
if (flex) flex.addEventListener("input", () => grass.setFlex(+flex.value));
if (heightAvg)
  heightAvg.addEventListener("input", () => {
    grass.setAvgHeight(+heightAvg.value);
    grass.regenerate();
  });

if (egCount)
  egCount.addEventListener("input", () => {
    egeria.setCount(+egCount.value);
    egeria.regenerate();
  });
if (egWidth)
  egWidth.addEventListener("input", () =>
    egeria.setLeafWidthScale(+egWidth.value)
  );
if (egNodes)
  egNodes.addEventListener("input", () => {
    egeria.setNodes(+egNodes.value);
    egeria.regenerate();
  });
if (egBranch)
  egBranch.addEventListener("input", () => {
    egeria.setBranchChance(+egBranch.value);
    egeria.regenerate();
  });

if (scatterBtn) scatterBtn.addEventListener("click", scatterAll);
if (regenBtn) regenBtn.addEventListener("click", scatterAll);

// ---------- Render loop
let last = performance.now(),
  frames = 0,
  acc = 0;
(function render() {
  requestAnimationFrame(render);
  const now = performance.now();
  const t = now * 0.001;
  const dt = (now - last) * 0.001;
  last = now;

  frames++;
  acc += dt;
  if (fpsEl && acc >= 0.5) {
    fpsEl.textContent = String(Math.round(frames / acc));
    frames = 0;
    acc = 0;
  }

  resizeCanvasToDisplaySize(canvas);
  gl.viewport(0, 0, canvas.width, canvas.height);
  gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);

  // const proj = makeProjection(canvas.width, canvas.height);
  const proj = makePerspective(45, canvas.width / canvas.height, 0.1, 30.0);
  const view = lookAt([0, 2.2, 3.4], [0, 0.9, 0], [0, 1, 0]);

  const angle = parseFloat(currentAngle?.value ?? "0");
  const dir = [Math.cos(angle), Math.sin(angle)];
  //   const shared = {
  //     proj,
  //     view: identity,
  //     time: t,
  //     currentStrength: parseFloat(currentStrength?.value ?? "0.6"),
  //     currentDir: dir,
  //     res: [canvas.width, canvas.height],
  //   };

  const shared = {
    proj,
    view,
    time: t,
    currentStrength: parseFloat(currentStrength?.value ?? "0.6"),
    currentDir: [Math.cos(angle), Math.sin(angle)],
    res: [canvas.width, canvas.height],
    fogColor: FOG.color,
    fogNear: FOG.near,
    fogFar: FOG.far,
  };

  floor.draw(shared);
  if (showGrass?.checked !== false) grass.draw(shared);
  if (showEgeria?.checked !== false) egeria.draw(shared);
})();
