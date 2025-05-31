#include "ImGuiLayer.h"

namespace Syns {
    ImGuiLayer::ImGuiLayer() : Layer("ImguiLayer") {

    }

    ImGuiLayer::~ImGuiLayer() {
        
    }

    void ImGuiLayer::OnAttach() {
        ImGui::CreateContext();
        ImGui::StyleColorsDark();

        ImGuiIO& io = ImGui::GetIO(); (void)io;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad; 

        ImGui_ImplOpenGL3_Init("#version 130");
    }

    void ImGuiLayer::OnDetach() {
        
    }

    void ImGuiLayer::OnUpdate() {
        ImGui_ImplOpenGL3_NewFrame();
        ImGui::NewFrame();

        static bool show = true;
        ImGui::ShowDemoWindow(&show);

        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    }
}