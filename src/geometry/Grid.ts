import { vec3, vec4 } from 'gl-matrix';
import Drawable from '../rendering/gl/Drawable';
import { gl } from '../globals';

class Grid extends Drawable {
    indices: Uint32Array;
    positions: Float32Array;

    size: number;
    step: number;

    constructor(size: number, step: number)  {
        super(); // Call the constructor of the super class. This is required.
        this.size = size;
        this.step = step;
    }

    create() {
        
        const lines: number[] = [];
        const indices: number[] = [];
        const half = this.size / 2;
        let idx = 0;

        // Generate vertices along X and Z at y = 0
        for (let i = -half; i <= half; i += this.step) {
            // line parallel to X (constant Z)
            lines.push(-half, 0, i); // start
            lines.push(half, 0, i);  // end
            indices.push(idx, idx + 1);
            idx += 2;

            // line parallel to Z (constant X)
            lines.push(i, 0, -half); // start
            lines.push(i, 0, half);  // end
            indices.push(idx, idx + 1);
            idx += 2;
        }

        this.positions = new Float32Array(lines);
        this.indices = new Uint32Array(indices);
        this.count = this.indices.length;

        this.generateIdx();
        this.generatePos();

        gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, this.bufIdx);
        gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, this.indices, gl.STATIC_DRAW);

        gl.bindBuffer(gl.ARRAY_BUFFER, this.bufPos);
        gl.bufferData(gl.ARRAY_BUFFER, this.positions, gl.STATIC_DRAW);

        console.log(`Created grid: size=${this.size}, step=${this.step}, lines=${this.indices.length / 2}`);
    }
}