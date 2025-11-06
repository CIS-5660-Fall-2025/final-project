import {vec2, vec3, vec4, mat3, mat4} from 'gl-matrix';
import Drawable from './Drawable';
import Camera from '../../Camera';
import {gl} from '../../globals';
import ShaderProgram, { Shader } from './ShaderProgram';
import Plane from '../../geometry/Plane';

// In this file, `gl` is accessible because it is imported above
class OpenGLRenderer {

  gridShader: ShaderProgram;
  plane: Plane;

  constructor(public canvas: HTMLCanvasElement) {
    this.gridShader = new ShaderProgram([
        new Shader(gl.VERTEX_SHADER, require('./../../shaders/grid-vert.glsl')),
        new Shader(gl.FRAGMENT_SHADER, require('./../../shaders/grid-frag.glsl')),
    ]);

    this.plane = new Plane(100, 100);
    this.plane.create();
  }

  setClearColor(r: number, g: number, b: number, a: number) {
    gl.clearColor(r, g, b, a);
  }

  setSize(width: number, height: number) {
    this.canvas.width = width;
    this.canvas.height = height;
  }

  clear() {
    gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
  }

  render(camera: Camera, prog: ShaderProgram, drawables: Array<Drawable>, colorParam:vec4) {
    let model = mat4.create();
    let viewProj = mat4.create();
    let color = colorParam;

    mat4.identity(model);
    mat4.multiply(viewProj, camera.projectionMatrix, camera.viewMatrix);
    prog.setModelMatrix(model);
    prog.setViewProjMatrix(viewProj);
    prog.setGeometryColor(color);

    for (let drawable of drawables) {
      prog.draw(drawable);
    }
  }

  renderGrid(camera: Camera) {
    let model = mat4.create();
    let viewProj = mat4.create();
    let mvp = mat4.create();
    mat4.identity(model);
    mat4.multiply(viewProj, camera.projectionMatrix, camera.viewMatrix);
    mat4.multiply(mvp, viewProj, model);


    this.gridShader.setUniformMat4("u_MVP", mvp);

    this.gridShader.setUniformVec3("u_GridColor", vec3.fromValues(1,1,1));
    this.gridShader.setUniformFloat("u_GridSpacing", 1.0);
    this.gridShader.setUniformFloat("u_LineWidth", 0.01);

    gl.enable(gl.BLEND);
    gl.blendFunc(gl.SRC_ALPHA, gl.ONE_MINUS_SRC_ALPHA);
    this.gridShader.draw(this.plane);
  }
};

export default OpenGLRenderer;
