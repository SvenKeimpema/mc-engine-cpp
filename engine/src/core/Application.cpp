#include "Application.h"

namespace Syns {
    Application::Application() {

    }

    Application::~Application() {

    }

    void Application::Run() {
        while(true);
    }

    void Application::PushLayer(Layer* layer) {
        stack.PushLayer(layer);
    }

    void Application::PushOverlay(Layer* layer) {
        stack.PushOverlay(layer);
    }
}