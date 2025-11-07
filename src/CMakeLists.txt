add_executable(App main.cpp)
# Add 'webgpu' target as dependency of our App
target_link_libraries(App PRIVATE webgpu)

cmake_minimum_required(VERSION 3.0...3.25)
project(
    LearnWebGPU # name of the project, which will also be the name of the visual studio solution if you use it
    VERSION 4.2.0 # any version number
    LANGUAGES CXX C # programming languages used by the project
)

set_target_properties(App PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    COMPILE_WARNING_AS_ERROR ON
)

if (MSVC)
    target_compile_options(App PRIVATE /W4)
else()
    target_compile_options(App PRIVATE -Wall -Wextra -pedantic)
endif()

# Include webgpu directory to define the 'webgpu' target
add_subdirectory(webgpu)

# Make sure that the .dll file our binary depends on at runtime is copied next to the binary.  Unnecessary for Dawn
target_copy_webgpu_binaries(App)

# Options specific to Emscripten (for putting on web)
if (EMSCRIPTEN)
	set_target_properties(App PROPERTIES SUFFIX ".html")
	target_link_options(App PRIVATE -sASYNCIFY)
endif()