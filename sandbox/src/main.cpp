#include "Syns.h"

class Sandbox : public Syns::Application {
public:
    Sandbox() {

    }

    ~Sandbox() {

    }

    void Run() {

    }
};

Syns::Application* Syns::CreateApplication() {
    return new Sandbox();
}