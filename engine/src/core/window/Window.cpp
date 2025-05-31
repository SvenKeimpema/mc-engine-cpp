#include "Window.h"

namespace Syns {
    Window* Window::instance = nullptr;

    Window::Window(long handle) {
        GLFWwindow* window = (GLFWwindow*)(uintptr_t)handle;
        instance = this;
    }

    Window::~Window() {
        if (instance == this) {
            instance = nullptr;
        }
    }
}