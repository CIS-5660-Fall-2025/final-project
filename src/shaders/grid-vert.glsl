#version 300 es
precision mediump float;

layout(location = 0) in vec4 vs_Pos;

uniform mat4 u_MVP;

out vec4 fs_Pos;

void main() {
    fs_Pos = vs_Pos;
    gl_Position = u_MVP * vs_Pos;
}
