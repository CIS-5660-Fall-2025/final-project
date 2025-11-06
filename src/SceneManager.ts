import { vec3 } from 'gl-matrix';
import Hex from './geometry/Hex';

export class SceneManager
{
    hex: Hex;

    loadScene(): void
    {
        this.hex = new Hex();
        this.hex.create();
    }
}
