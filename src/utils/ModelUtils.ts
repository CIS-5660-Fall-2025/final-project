import { vec3, vec2 } from 'gl-matrix';

export function parseOBJ(objText: string): {
    positions: Float32Array;
    normals: Float32Array;
    uvs: Float32Array;
    indices: Uint32Array;
}
{
    const positions: number[] = [];
    const normals: number[] = [];
    const uvs: number[] = [];
    const indices: number[] = [];

    const tempPositions: vec3[] = [];
    const tempNormals: vec3[] = [];
    const tempUVs: vec2[] = [];

    const lines = objText.split('\n');

    for (const line of lines)
    {
        const parts = line.trim().split(/\s+/);

        if (parts[0] === 'v')
        {
            tempPositions.push(vec3.fromValues(
                parseFloat(parts[1]),
                parseFloat(parts[2]),
                parseFloat(parts[3])
            ));
        }
        else if (parts[0] === 'vn')
        {
            tempNormals.push(vec3.fromValues(
                parseFloat(parts[1]),
                parseFloat(parts[2]),
                parseFloat(parts[3])
            ));
        }
        else if (parts[0] === 'vt')
        {
            tempUVs.push(vec2.fromValues(
                parseFloat(parts[1]),
                parseFloat(parts[2])
            ));
        }
        else if (parts[0] === 'f')
        {
            const faceVertices = parts.slice(1);

            const pushVertex = (v: string) =>
            {
                const vertexData = v.split('/');
                const posIndex = parseInt(vertexData[0]) - 1;
                const uvIndex = vertexData[1] ? parseInt(vertexData[1]) - 1 : posIndex;
                const normalIndex = vertexData[2] ? parseInt(vertexData[2]) - 1 : posIndex;

                const pos = tempPositions[posIndex];
                positions.push(pos[0], pos[1], pos[2], 1);

                const normal = tempNormals[normalIndex] || vec3.fromValues(0, 1, 0);
                normals.push(normal[0], normal[1], normal[2], 0);

                const uv = tempUVs[uvIndex] || vec2.fromValues(0, 0);
                uvs.push(uv[0], uv[1]);

                indices.push(positions.length / 4 - 1);
            };

            // First triangle
            pushVertex(faceVertices[0]);
            pushVertex(faceVertices[1]);
            pushVertex(faceVertices[2]);

            // Quad → second triangle
            if (faceVertices.length === 4)
            {
                pushVertex(faceVertices[0]);
                pushVertex(faceVertices[2]);
                pushVertex(faceVertices[3]);
            }
        }
    }

    return {
        positions: new Float32Array(positions),
        normals: new Float32Array(normals),
        uvs: new Float32Array(uvs),
        indices: new Uint32Array(indices)
    };
}