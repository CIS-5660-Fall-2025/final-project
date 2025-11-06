// Vertex & Fragment shaders for instanced 'seaweed blade' ribbons.
// WebGL2, no dependencies.

export const vs = `#version 300 es
precision highp float;

// Base blade mesh (a vertical ribbon split into segments)
in vec2 a_pos;        // local x (width), y (0..1 height)
in float a_t;         // 0..1 normalized along blade
in vec2 a_uv;         // UV for possible future texturing

// Per-instance attributes
in vec2 i_base;       // world base position (x,z on "floor")
in float i_height;    // blade height scale
in float i_phase;     // sway phase offset
in float i_amp;       // sway amplitude
in float i_hue;       // color hue (0..1)

// Uniforms
uniform mat4 u_proj;
uniform mat4 u_view;
uniform float u_time;
uniform float u_currentStrength;
uniform vec2  u_currentDir;  // x,z unit vector
uniform float u_flex;        // controls curvature
uniform vec2  u_res;         // viewport size

// Varyings
out float v_t;
out vec3 v_color;

float hash11(float n){ return fract(sin(n)*43758.5453123); }

// Cheap 2D noise based on sin (good enough for water wobble)
float n2(vec2 p) {
  return sin(p.x)*sin(p.y);
}

// Convert hue to rgb (approximate), fixed s=0.6, v=0.9
vec3 h2rgb(float h){
  float r = abs(h*6.0 - 3.0) - 1.0;
  float g = 2.0 - abs(h*6.0 - 2.0);
  float b = 2.0 - abs(h*6.0 - 4.0);
  return clamp(vec3(r,g,b),0.0,1.0) * 0.9;
}

void main() {
  // Local space: a_pos.x in [-w, w], a_pos.y in [0,1] (segment fraction)
  float t = clamp(a_t, 0.0, 1.0);
  float height = i_height;

  // Sway: phase + time + per-blade noise
  float phase = i_phase + u_time * (0.7 + 0.4*hash11(i_phase*91.7));
  float sway = sin(phase + t*6.2831) * i_amp * u_currentStrength;

  // Flex profile: more bend near the tip
  float tipWeight = pow(t, u_flex);
  float bend = sway * tipWeight;

  // Secondary wobble to avoid uniform motion
  float wobble = 0.06 * sin(8.0*t + u_time*2.2 + i_phase*3.1);

  // Displace along a vector perpendicular to "up" (x,z plane)
  vec2 lateral = normalize(vec2(-u_currentDir.y, u_currentDir.x));
  if (!all(greaterThan(abs(u_currentDir), vec2(0.0)))) {
    lateral = vec2(1.0, 0.0);
  }

  // Build world position (x,z plane, y is vertical)
  vec3 world = vec3(0.0);
  world.xz = i_base + lateral * (bend + wobble) + a_pos.x * 0.02; // ribbon width
  world.y  = t * height;

  // Slight horizontal meander along the blade length
  world.xz += u_currentDir * (0.05 * tipWeight * sin(t*3.0 + i_phase + u_time));

  // Project
  gl_Position = u_proj * u_view * vec4(world, 1.0);

  // Color gradient from base (darker) to tip (lighter). Hue varies per-instance.
  vec3 baseCol = h2rgb(i_hue) * vec3(0.4,0.7,0.5);
  vec3 tipCol  = h2rgb(i_hue) * vec3(0.8,1.0,0.9);
  v_color = mix(baseCol, tipCol, t);
  v_t = t;
}
`;

export const fs = `#version 300 es
precision highp float;

in float v_t;
in vec3 v_color;
out vec4 outColor;

uniform float u_time;

// Simple caustics look via animated stripes
float caustic(float x){
  return 0.5 + 0.5*sin(x);
}

void main() {
  // Subtle animated caustics overlay that brightens the color
  float c = 0.12 * caustic(v_t*24.0 + u_time*2.0)
          + 0.06 * caustic(v_t*39.0 - u_time*1.7);
  vec3 col = v_color * (1.0 + c);
  outColor = vec4(col, 1.0);
}
`;
