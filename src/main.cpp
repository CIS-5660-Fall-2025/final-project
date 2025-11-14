// This must be defined EXACTLY ONCE, no more no less
#define WEBGPU_CPP_IMPLEMENTATION

#include <iostream>
#include <vector>
#include "application.h"

int main(int, char**) {
    Application app;

    if(!app.Initialize()) {
        return 1;
    }

    #ifdef __EMSCRIPTEN__
    // Emscripten uses a tick callback function, we need to use the blind user data
    // To have our app in our callback
    auto callback = [](void *userDataApp) {
        Application *pApp = static_cast<Application*>(userDataApp);
        pApp->MainLoop();
    }
    emscripten_set_main_loop_arg(callback, &app, 0, true);
    // (callback, userData, fps, simulate_infinite_loop)
    // fps = 0 so that the browser controls it
    // simulate_infinite_loop = true so that app isn't freed
    #else // __EMSCRIPTEN
    while(app.IsRunning()) {
        app.MainLoop();
    }
    #endif // __EMSCRIPTEN

    app.Terminate();

    return 0;
}