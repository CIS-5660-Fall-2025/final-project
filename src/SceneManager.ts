import { vec3 } from 'gl-matrix';
import Hex from './geometry/Hex';
import Plane from './geometry/Plane';

export class SceneManager
{
    hex: Hex;
    plane: Plane;

    loadScene(): void
    {
        this.hex = new Hex();
        this.hex.create();
        
        this.plane = new Plane();
        this.plane.create();
    }
}
