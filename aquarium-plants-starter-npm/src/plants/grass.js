import { vs, fs } from "./grassShaders.js";

// ---------- Utilities
function createGL(canvas) {
  const gl = canvas.getContext("webgl2", { antialias: true, alpha: false });
  if (!gl) throw new Error("WebGL2 not supported");
  return gl;
}

function compile(gl, type, source) {
  const sh = gl.createShader(type);
  gl.shaderSource(sh, source);
  gl.compileShader(sh);
  if (!gl.getShaderParameter(sh, gl.COMPILE_STATUS)) {
    throw new Error(gl.getShaderInfoLog(sh) || "Shader compile error");
  }
  return sh;
}

function program(gl, vsSrc, fsSrc) {
  const p = gl.createProgram();
  gl.attachShader(p, compile(gl, gl.VERTEX_SHADER, vsSrc));
  gl.attachShader(p, compile(gl, gl.FRAGMENT_SHADER, fsSrc));
  gl.linkProgram(p);
  if (!gl.getProgramParameter(p, gl.LINK_STATUS)) {
    throw new Error(gl.getProgramInfoLog(p) || "Program link error");
  }
  return p;
}

function resizeCanvasToDisplaySize(canvas) {
  const dpr = Math.min(window.devicePixelRatio || 1, 2);
  const width = Math.floor(canvas.clientWidth * dpr);
  const height = Math.floor(canvas.clientHeight * dpr);
  if (canvas.width !== width || canvas.height !== height) {
    canvas.width = width;
    canvas.height = height;
    return true;
  }
  return false;
}

// ---------- Geometry: one 'reference' ribbon blade split into N segments
function createBladeGeometry(gl, segments = 18) {
  const positions = [];
  const a_t = [];
  const uvs = [];
  const indices = [];
  const ribbonHalfWidth = 0.02; // local width; scaled again in shader if needed

  for (let i = 0; i <= segments; i++) {
    const t = i / segments; // 0..1 along height
    const y = t; // local height unit

    // two points across the ribbon width
    positions.push(-ribbonHalfWidth, y);
    positions.push(+ribbonHalfWidth, y);
    a_t.push(t, t);
    uvs.push(0, t, 1, t);

    if (i < segments) {
      const base = i * 2;
      indices.push(base, base + 1, base + 2);
      indices.push(base + 1, base + 3, base + 2);
    }
  }

  const vao = gl.createVertexArray();
  gl.bindVertexArray(vao);

  function buf(data, attrib, size, type = gl.FLOAT, divisor = 0) {
    const b = gl.createBuffer();
    gl.bindBuffer(gl.ARRAY_BUFFER, b);
    gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(data), gl.STATIC_DRAW);
    const loc = attrib;
    gl.enableVertexAttribArray(loc);
    gl.vertexAttribPointer(loc, size, type, false, 0, 0);
    if (divisor) gl.vertexAttribDivisor(loc, divisor);
    return b;
  }

  // Attribute locations (hard-coded to match shader order)
  const a_pos_loc = 0;
  const a_t_loc = 1;
  const a_uv_loc = 2;
  const i_base_loc = 3;
  const i_height_loc = 4;
  const i_phase_loc = 5;
  const i_amp_loc = 6;
  const i_hue_loc = 7;

  gl.bindVertexArray(vao);
  buf(positions, a_pos_loc, 2);
  buf(a_t, a_t_loc, 1);
  buf(uvs, a_uv_loc, 2);

  const ibo = gl.createBuffer();
  gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, ibo);
  gl.bufferData(
    gl.ELEMENT_ARRAY_BUFFER,
    new Uint16Array(indices),
    gl.STATIC_DRAW
  );

  return {
    vao,
    count: indices.length,
    attribs: {
      a_pos_loc,
      a_t_loc,
      a_uv_loc,
      i_base_loc,
      i_height_loc,
      i_phase_loc,
      i_amp_loc,
      i_hue_loc,
    },
  };
}

// ---------- Instance buffers
function createInstanceBuffers(gl, attribs, maxInstances) {
  const { i_base_loc, i_height_loc, i_phase_loc, i_amp_loc, i_hue_loc } =
    attribs;

  function makeBuffer(loc, size) {
    const b = gl.createBuffer();
    gl.bindBuffer(gl.ARRAY_BUFFER, b);
    gl.bufferData(gl.ARRAY_BUFFER, maxInstances * size * 4, gl.DYNAMIC_DRAW);
    gl.enableVertexAttribArray(loc);
    gl.vertexAttribPointer(loc, size, gl.FLOAT, false, 0, 0);
    gl.vertexAttribDivisor(loc, 1);
    return b;
  }

  return {
    base: makeBuffer(i_base_loc, 2),
    height: makeBuffer(i_height_loc, 1),
    phase: makeBuffer(i_phase_loc, 1),
    amp: makeBuffer(i_amp_loc, 1),
    hue: makeBuffer(i_hue_loc, 1),
    update(gl, data) {
      gl.bindBuffer(gl.ARRAY_BUFFER, this.base);
      gl.bufferSubData(gl.ARRAY_BUFFER, 0, new Float32Array(data.base));
      gl.bindBuffer(gl.ARRAY_BUFFER, this.height);
      gl.bufferSubData(gl.ARRAY_BUFFER, 0, new Float32Array(data.height));
      gl.bindBuffer(gl.ARRAY_BUFFER, this.phase);
      gl.bufferSubData(gl.ARRAY_BUFFER, 0, new Float32Array(data.phase));
      gl.bindBuffer(gl.ARRAY_BUFFER, this.amp);
      gl.bufferSubData(gl.ARRAY_BUFFER, 0, new Float32Array(data.amp));
      gl.bindBuffer(gl.ARRAY_BUFFER, this.hue);
      gl.bufferSubData(gl.ARRAY_BUFFER, 0, new Float32Array(data.hue));
    },
  };
}

// ---------- Camera/Projection helpers
function makeProjection(width, height) {
  const aspect = width / height;
  const scale = 1.6; // zoom
  const left = -aspect * scale;
  const right = aspect * scale;
  const bottom = 0.0;
  const top = 2.0 * scale;
  const near = -10,
    far = 10;
  const proj = [
    2 / (right - left),
    0,
    0,
    0,
    0,
    2 / (top - bottom),
    0,
    0,
    0,
    0,
    -2 / (far - near),
    0,
    -(right + left) / (right - left),
    -(top + bottom) / (top - bottom),
    -(far + near) / (far - near),
    1,
  ];
  return proj;
}

function identity() {
  return [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1];
}

function randRange(a, b) {
  return a + Math.random() * (b - a);
}

// ---------- Main initialization and animation export
export function initGrass() {
  const canvas = document.getElementById("gl");
  const gl = createGL(canvas);

  const prog = program(gl, vs, fs);
  gl.useProgram(prog);

  // Bind attribute locations explicitly to match our VAO setup
  gl.bindAttribLocation(prog, 0, "a_pos");
  gl.bindAttribLocation(prog, 1, "a_t");
  gl.bindAttribLocation(prog, 2, "a_uv");
  gl.bindAttribLocation(prog, 3, "i_base");
  gl.bindAttribLocation(prog, 4, "i_height");
  gl.bindAttribLocation(prog, 5, "i_phase");
  gl.bindAttribLocation(prog, 6, "i_amp");
  gl.bindAttribLocation(prog, 7, "i_hue");

  const blade = createBladeGeometry(gl, 22);
  const instancesMax = 1000;
  const instanceBufs = createInstanceBuffers(gl, blade.attribs, instancesMax);

  // Uniforms
  const getU = (name) => gl.getUniformLocation(prog, name);
  const u_proj = getU("u_proj");
  const u_view = getU("u_view");
  const u_time = getU("u_time");
  const u_currentStrength = getU("u_currentStrength");
  const u_currentDir = getU("u_currentDir");
  const u_flex = getU("u_flex");
  const u_res = getU("u_res");

  // ---------- Populate instances
  const state = {
    count: 200,
    base: [],
    height: [],
    phase: [],
    amp: [],
    hue: [],
    currentStrength: 0.6,
    currentAngle: 0.0,
    flex: 1.4,
    avgHeight: 1.0,
  };

  function scatterPlants() {
    state.base = [];
    state.height = [];
    state.phase = [];
    state.amp = [];
    state.hue = [];
    for (let i = 0; i < state.count; i++) {
      const x = randRange(-1.5, 1.5);
      const z = randRange(-0.6, 0.6); // treating z as "depth" in xz plane
      state.base.push(x, z);
      state.height.push(
        randRange(0.5 * state.avgHeight, 1.6 * state.avgHeight)
      );
      state.phase.push(Math.random() * 6.2831);
      state.amp.push(randRange(0.05, 0.25));
      state.hue.push(randRange(0.28, 0.42)); // green range
    }
    instanceBufs.update(gl, state);
  }
  scatterPlants();

  // ---------- Interaction
  const plantCount = document.getElementById("plantCount");
  const plantCountLabel = document.getElementById("plantCountLabel");
  const currentStrength = document.getElementById("currentStrength");
  const currentAngle = document.getElementById("currentAngle");
  const flex = document.getElementById("flex");
  const heightAvg = document.getElementById("height");
  const scatterBtn = document.getElementById("scatter");
  const fpsEl = document.getElementById("fps");

  function updateCountLabel() {
    plantCountLabel.textContent = String(state.count);
  }
  updateCountLabel();

  plantCount.addEventListener("input", (e) => {
    state.count = parseInt(plantCount.value, 10);
    updateCountLabel();
    scatterPlants();
  });
  currentStrength.addEventListener(
    "input",
    (e) => (state.currentStrength = parseFloat(currentStrength.value))
  );
  currentAngle.addEventListener(
    "input",
    (e) => (state.currentAngle = parseFloat(currentAngle.value))
  );
  flex.addEventListener("input", (e) => (state.flex = parseFloat(flex.value)));
  heightAvg.addEventListener("input", (e) => {
    state.avgHeight = parseFloat(heightAvg.value);
    scatterPlants();
  });
  scatterBtn.addEventListener("click", scatterPlants);

  // Mouse pushes
  let mouse = { x: 0, y: 0, down: false };
  canvas.addEventListener("pointermove", (e) => {
    const rect = canvas.getBoundingClientRect();
    const nx = (e.clientX - rect.left) / rect.width;
    const ny = (e.clientY - rect.top) / rect.height;
    // map to world-ish units
    mouse.x = (nx - 0.5) * 3.2;
    mouse.y = (1.0 - ny) * 3.2;
  });
  canvas.addEventListener("pointerdown", () => (mouse.down = true));
  canvas.addEventListener("pointerup", () => (mouse.down = false));

  // Click near left edge to 'plant' a clump
  canvas.addEventListener("click", (e) => {
    const rect = canvas.getBoundingClientRect();
    const nx = (e.clientX - rect.left) / rect.width;
    if (nx < 0.15) {
      // add ~10 plants in a clump at the bottom-left
      const cx = -1.6 + Math.random() * 0.1;
      const cz = -0.3 + Math.random() * 0.2;
      for (let i = 0; i < 10 && state.count < instancesMax; i++) {
        state.base.push(cx + randRange(-0.15, 0.15), cz + randRange(-0.1, 0.1));
        state.height.push(
          randRange(0.5 * state.avgHeight, 1.6 * state.avgHeight)
        );
        state.phase.push(Math.random() * 6.2831);
        state.amp.push(randRange(0.05, 0.25));
        state.hue.push(randRange(0.28, 0.42));
        state.count++;
      }
      plantCount.value = String(state.count);
      updateCountLabel();
      instanceBufs.update(gl, state);
    }
  });

  // ---------- Render loop
  gl.enable(gl.DEPTH_TEST);
  gl.clearColor(0.02, 0.07, 0.13, 1);

  let lastTime = performance.now();
  let frames = 0;
  let fpsTimer = 0;

  function render() {
    requestAnimationFrame(render);
    const now = performance.now();
    const dt = (now - lastTime) / 1000;
    lastTime = now;

    // FPS display
    frames++;
    fpsTimer += dt;
    if (fpsTimer >= 0.5) {
      const fps = Math.round(frames / fpsTimer);
      fpsEl.textContent = String(fps);
      frames = 0;
      fpsTimer = 0;
    }

    // Resize
    const resized = resizeCanvasToDisplaySize(canvas);
    gl.viewport(0, 0, canvas.width, canvas.height);

    // Background gradient to simulate depth
    gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);

    // Compute current vector from UI + mouse push
    let dir = [Math.cos(state.currentAngle), Math.sin(state.currentAngle)];
    // if mouse is down, make current flow away from the cursor
    if (mouse.down) {
      // from mouse to center (0, 0 in world XZ)
      const vx = -mouse.x;
      const vz = -(mouse.y - 0.0);
      const len = Math.hypot(vx, vz) || 1.0;
      dir = [vx / len, vz / len];
    }

    // Uniforms
    const proj = makeProjection(canvas.width / canvas.height, 1);
    const view = identity();

    gl.useProgram(prog);
    gl.bindVertexArray(blade.vao);

    gl.uniformMatrix4fv(u_proj, false, proj);
    gl.uniformMatrix4fv(u_view, false, view);
    gl.uniform1f(u_time, now * 0.001);
    gl.uniform1f(u_currentStrength, state.currentStrength);
    gl.uniform2f(u_currentDir, dir[0], dir[1]);
    gl.uniform1f(u_flex, state.flex);
    gl.uniform2f(u_res, canvas.width, canvas.height);

    // Draw
    gl.drawElementsInstanced(
      gl.TRIANGLES,
      blade.count,
      gl.UNSIGNED_SHORT,
      0,
      state.count
    );
  }
  render();
}
