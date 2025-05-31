#pragma once

#include "core/Core.h"
#include "core/Layer.h"
#include "core/window/Window.h"

#include "imgui.h"
#include "vendor/imgui_backends/include/imgui_impl_opengl3.h"

namespace Syns {
    class ImGuiLayer : public Layer {
        ImGuiLayer();
        ~ImGuiLayer();

        void OnUpdate();
        void OnAttach();
        void OnDetach();
    };
}