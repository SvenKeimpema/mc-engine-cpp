#pragma once

#include "Core.h"

namespace Syns {
    class SYNS_API Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();
}
