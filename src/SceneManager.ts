import { vec2, vec3, mat4 } from 'gl-matrix';
import Hex from './geometry/Hex';
import ShaderProgram from './rendering/gl/ShaderProgram';
import Camera from './Camera';

export class SceneManager {
    hex: Hex;
    tiles: vec2[];
    tilesWidth: number;
    tilesHeight: number;

    loadScene(): void {
        this.hex = new Hex();
        this.hex.create();

        this.tilesWidth = 10;
        this.tilesHeight = 10;

        this.tiles = [];
        for (let i = 0; i != this.tilesWidth; ++i) {
            for (let j = 0; j != this.tilesHeight; ++j) {
                this.tiles.push(vec2.fromValues(i, j));
            }
        }
    }

    drawTiles(prog: ShaderProgram, camera: Camera): void {
        let model = mat4.create();
        let modelinvtr = mat4.create();
        let viewProj = mat4.create();
        let color = vec3.fromValues(1, 1, 1);

        // Model matrix and inv model
        mat4.identity(model);
        mat4.multiply(viewProj, camera.projectionMatrix, camera.viewMatrix);
        prog.setUniformMat4("u_ViewProj", viewProj);
        prog.setUniformVec4("u_Color", color);
        
        for (let i = 0; i != this.tilesWidth; ++i) {
            for (let j = 0; j != this.tilesHeight; ++j) {
                
                mat4.fromTranslation(model, vec3.fromValues(i*2, 0, j*2));
                prog.setUniformMat4("u_Model", model);
                mat4.transpose(modelinvtr, model);
                mat4.invert(modelinvtr, modelinvtr);
                prog.setUniformMat4("u_ModelInvTr", modelinvtr);

                prog.draw(this.hex);

            }
        }
    }
}
