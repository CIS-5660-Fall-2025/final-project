#version 300 es
precision mediump float;

in vec4 fs_Pos;

uniform vec3 u_GridColor;
uniform float u_GridSpacing;
uniform float u_LineWidth;

out vec4 fragColor;

void main() {
    // distance to nearest line along X and Z
    float fx = mod(abs(fs_Pos.x), u_GridSpacing);
    float fz = mod(abs(fs_Pos.z), u_GridSpacing);

    float dx = fwidth(fs_Pos.x);
    float dz = fwidth(fs_Pos.z);

    // anti-aliased line intensity
    float lineX = 1.0 - smoothstep(0.0, u_LineWidth + dx, fx);
    float lineZ = 1.0 - smoothstep(0.0, u_LineWidth + dz, fz);

    float line = clamp(lineX + lineZ, 0.0, 1.0);
    fragColor = vec4(u_GridColor, line);
}
