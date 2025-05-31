#include "Application.h"

namespace Syns {
    Application* Application::application = nullptr;
    
    Application::Application() {
        application = this;
    }

    Application::~Application() {

    }

    void Application::Update() {
    }

    void Application::PushLayer(Layer* layer) {
        stack.PushLayer(layer);
    }

    void Application::PushOverlay(Layer* layer) {
        stack.PushOverlay(layer);
    }
}