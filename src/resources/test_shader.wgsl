struct VertexInput {
	@location(0) position: vec2f,
	@location(1) color: vec3f
};

struct VertexOutput {
	@builtin(position) position: vec4f,
	@location(0) color: vec3f
};

@group(0) @binding(0) var<uniform> u_Time: f32;

fn rot(v: vec2f, o: f32) -> vec2f {
	return mat2x2f(cos(o), sin(o), -sin(o), cos(o)) * v;
}

@vertex
fn vs_main(vIn: VertexInput) -> VertexOutput {
	var out: VertexOutput;
	out.position = vec4f(rot(vIn.position, u_Time), 0.0, 1.0);
	out.color = vIn.color;
	return out;
}

@fragment
fn fs_main(in: VertexOutput) -> @location(0) vec4f {
	var col = pow(in.color, vec3f(2.2));
	return vec4(col, 1.0);
}