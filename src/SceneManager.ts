import { vec2, vec3, mat4 } from 'gl-matrix';
import Hex from './geometry/Hex';
import ShaderProgram from './rendering/gl/ShaderProgram';
import Camera from './Camera';

export class SceneManager {
    hex: Hex;
    tiles: vec2[];
    tilesRadius: number;

    loadScene(): void {
        this.hex = new Hex();
        this.hex.create();

        this.tilesRadius = 5;

        this.tiles = [];
        for (let q = -this.tilesRadius; q <= this.tilesRadius; ++q) {
            for (let r = -this.tilesRadius; r <= this.tilesRadius; ++r) {
                for (let s = -this.tilesRadius; s <= this.tilesRadius; ++s) {
                    if ((q + r + s) == 0)
                        this.tiles.push(vec2.fromValues(q, r));
                }
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

        this.tiles.forEach((tile) => {
            const q = tile[0];
            const r = tile[1];

            var x = (3. / 2 * q);
            var y = (Math.sqrt(3) / 2 * q + Math.sqrt(3) * r);

            let v = vec3.fromValues(x * 1.1, 0, y * 1.1);

            mat4.fromTranslation(model, v);
            prog.setUniformMat4("u_Model", model);
            mat4.transpose(modelinvtr, model);
            mat4.invert(modelinvtr, modelinvtr);
            prog.setUniformMat4("u_ModelInvTr", modelinvtr);
            prog.draw(this.hex);
        });
    }
}
