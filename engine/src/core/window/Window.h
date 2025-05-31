#include "core/Core.h"
#include "glfw/glfw3.h"

namespace Syns {
    class Window {
    public:
        Window(long handle);
        ~Window();

        static Window* GetInstance() { return instance; }
        GLFWwindow* GetGLFWwindow() { return window; }
    private:
        GLFWwindow* window;
        static Window* instance;
    };
}
