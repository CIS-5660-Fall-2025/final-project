#pragma once

#include <webgpu/webgpu.hpp>

#include <GLFW/glfw3.h>
#include <glfw3webgpu.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#include <utility>
#include <vector>
#include <filesystem>

class ResourceManager {
    public:
    
    static wgpu::ShaderModule LoadShaderModule(
        const std::filesystem::path& path,
        wgpu::Device device
    );
};