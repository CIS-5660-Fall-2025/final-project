import { vec3 } from 'gl-matrix';
import Hex from './geometry/Hex';
import Plane from './geometry/Plane';

export class SceneManager
{
    hex: Hex;

    loadScene(): void
    {
        this.hex = new Hex();
        this.hex.create();
    }
}
