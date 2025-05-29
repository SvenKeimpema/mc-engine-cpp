#pragma once

#include "Core.h"
#include "LayerStack.h"

namespace Syns {
    class SYNS_API Application {
    public:
        Application();
        virtual ~Application();

        void Run();

        void PushLayer(Layer* layer);
        void PushOverlay(Layer* overlay);
    private:
        LayerStack stack;
    };

    Application* CreateApplication();
}
