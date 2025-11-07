#include <GLFW/glfw3.h>
#include <webgpu/webgpu.h>
#ifdef WEBGPU_BACKEND_WGPU
#include <webgpu/wgpu.h>
#endif
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

class Application {
    public:
    
    bool Initialize(); // Was initialization succesful?
    void Terminate();
    void MainLoop(); // Draw frame and handle events
    bool IsRunning(); // Returns true as long as main loop should keep going

    private:
    
    GLFWwindow *window;
    WGPUDevice device;
    WGPUQueue queue;
};