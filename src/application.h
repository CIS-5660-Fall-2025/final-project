
#include <webgpu/webgpu.hpp>

#include <GLFW/glfw3.h>
#include <glfw3webgpu.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif
#include <utility>

using namespace wgpu;

class Application {
    public:
    
    inline Application() : device(nullptr), queue(nullptr), surface(nullptr) {}
    bool Initialize(); // Was initialization succesful?
    void Terminate();
    void MainLoop(); // Draw frame and handle events
    bool IsRunning(); // Returns true as long as main loop should keep going

    private:
    
    std::pair<SurfaceTexture, TextureView> GetNextSurfaceViewData();
    void InitializeRenderPipeline();
    
    GLFWwindow *window;
    Device device;
    Queue queue;
    Surface surface;
};