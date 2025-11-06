#version 300 es
precision mediump float;

in vec4 fs_Pos;

uniform vec3 u_GridColor;
uniform float u_GridSpacing;
uniform float u_LineWidth;

out vec4 fragColor;

void main() {
    // Distance to nearest grid line in X and Z
    float fx = abs(fract(fs_Pos.x / u_GridSpacing) - 0.5);
    float fz = abs(fract(fs_Pos.z / u_GridSpacing) - 0.5);

    // Combine X and Z lines
    float line = step(fx, u_LineWidth) + step(fz, u_LineWidth);
    line = clamp(line, 0.0, 1.0);

    // Output color with alpha = line intensity (transparent background)
    fragColor = vec4(u_GridColor, line);
}