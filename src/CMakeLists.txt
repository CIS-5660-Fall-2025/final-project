cmake_minimum_required(VERSION 3.0...3.25)

project(
    LearnWebGPU # name of the project, which will also be the name of the visual studio solution if you use it
    VERSION 4.2.0 # any version number
    LANGUAGES CXX C # programming languages used by the project
)

if (NOT EMSCRIPTEN)
    # Add the 'glfw' directory, which contains the definition of a 'glfw' target
    add_subdirectory(glfw)
else()
    # Create a mock 'glfw' target that just sets the `-sUSE_GLFW=3` link option:
    # Because Emscripten already supports glfw
    add_library(glfw INTERFACE)
    target_link_options(glfw INTERFACE -sUSE_GLFW=3)
endif()

# Include directories to define targets
add_subdirectory(webgpu)
add_subdirectory(glfw3webgpu)

set(SOURCE_FILES
	main.cpp
	application.cpp
	webgpu_utils.cpp)

add_executable(App ${SOURCE_FILES})

target_link_libraries(App PRIVATE webgpu glfw glfw3webgpu)

# Make sure that the .dll file our binary depends on at runtime is copied next to the binary.  Unnecessary for Dawn
target_copy_webgpu_binaries(App)

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

# Options specific to Emscripten (for putting on web)
if (EMSCRIPTEN)
	set_target_properties(App PROPERTIES SUFFIX ".html")
	target_link_options(App PRIVATE -sASYNCIFY)
endif()

