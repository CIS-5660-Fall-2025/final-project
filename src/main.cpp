#include <webgpu/webgpu.h>
#include <iostream>

int main(int, char**) {
    WGPUInstanceDescriptor desc = {};
    desc.nextInChain = nullptr;

    WGPUInstance instance = wgpuCreateInstance(&desc);

    if (instance == nullptr) {
        std::cout << "Could not initialize WebGPU!" << std::endl;
        return 1;
    }

    std::cout << "WGPU instance: " << instance << std::endl;

    std::cout << "Hello, world!!!" << std::endl;
    return 0;
}