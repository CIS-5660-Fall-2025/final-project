import { vec3 } from 'gl-matrix';
import Drawable from '../rendering/gl/Drawable';
import { gl } from '../globals';

class Plane extends Drawable {
    indices: Uint32Array;
    positions: Float32Array;
    width: number;
    height: number;

    constructor(width: number = 10, height: number = 10) {
        super();
        this.width = width;
        this.height = height;
    }

    create() {
        const halfW = this.width / 2;
        const halfH = this.height / 2;

        // 4 vertices (X, Y, Z, W)
        this.positions = new Float32Array([
            -halfW, 0, -halfH, 1,  // bottom-left
             halfW, 0, -halfH, 1,  // bottom-right
             halfW, 0,  halfH, 1,  // top-right
            -halfW, 0,  halfH, 1,  // top-left
        ]);

        // 2 triangles (CCW)
        this.indices = new Uint32Array([
            0, 1, 2,
            0, 2, 3
        ]);

        this.count = this.indices.length;

        this.generatePos();
        this.generateIdx();

        // Upload buffers
        gl.bindBuffer(gl.ARRAY_BUFFER, this.bufPos);
        gl.bufferData(gl.ARRAY_BUFFER, this.positions, gl.STATIC_DRAW);

        gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, this.bufIdx);
        gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, this.indices, gl.STATIC_DRAW);

        console.log(`Created plane: width=${this.width}, height=${this.height}`);
    }
}

export default Plane;
