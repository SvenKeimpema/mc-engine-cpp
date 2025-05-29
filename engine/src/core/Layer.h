#pragma once

#include "Syns.h"

namespace Syns {
    class SYNS_API Layer {
    public:
        Layer(const std::string& name = "Layer");
        virtual ~Layer();

        virtual void OnAttach() {}
        virtual void OnDetach() {}
        virtual void OnUpdate() {}

        inline const std::string& GetName() const { return debug_name; }
    private:
        std::string debug_name;
    };
}