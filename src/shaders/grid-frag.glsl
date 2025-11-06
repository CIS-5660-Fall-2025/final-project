#version 300 es
precision mediump float;

in vec4 fs_Pos;

uniform vec3 u_GridColor;
uniform float u_GridSpacing;
uniform float u_LineWidth;

out vec4 fragColor;

void main() {
    // Compute distance from nearest grid line along X and Z, relative to origin
    float fx = abs(mod(fs_Pos.x, u_GridSpacing));
    float fz = abs(mod(fs_Pos.z, u_GridSpacing));

    float line = step(fx, u_LineWidth) + step(fz, u_LineWidth);
    line = clamp(line, 0.0, 1.0);

    fragColor = vec4(u_GridColor, line);
}
