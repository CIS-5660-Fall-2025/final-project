struct MyUniforms {
	projectionMatrix: mat4x4f,
	viewMatrix: mat4x4f,
	modelMatrix: mat4x4f,
	color: vec4f,
	time: f32
};

struct VertexInput {
	@location(0) position: vec3f,
	@location(1) color: vec3f
};

struct VertexOutput {
	@builtin(position) position: vec4f,
	@location(0) color: vec3f
};

@group(0) @binding(0) var<uniform> u_Uniforms: MyUniforms;

fn rot(v: vec2f, o: f32) -> vec2f {
	return mat2x2f(cos(o), sin(o), -sin(o), cos(o)) * v;
}

@vertex
fn vs_main(vIn: VertexInput) -> VertexOutput {
	var out: VertexOutput;
	var worldPos = (modelMatrix * vec4f(vIn.position, 1.0)).xyz;
	var pos = projectionMatrix * viewMatrix * vec4(worldPos, 1.);
	
	out.position = pos;
	out.color = vIn.color;
	return out;
}

@fragment
fn fs_main(in: VertexOutput) -> @location(0) vec4f {
	var col = pow(in.color*u_Uniforms.color.rgb, vec3f(2.2));
	return vec4(col, 1.0);
}