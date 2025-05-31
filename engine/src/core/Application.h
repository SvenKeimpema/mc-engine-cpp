#pragma once

#include "Core.h"
#include "core/LayerStack.h"

namespace Syns {
    class SYNS_API Application {
    public:
        Application();
        virtual ~Application();

        void Update();

        void PushLayer(Layer* layer);
        void PushOverlay(Layer* overlay);
        Application* GetApplication() { return application; }
    private:
        static Application* application;
        LayerStack stack;
    };

    Application* CreateApplication();

}
