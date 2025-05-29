#pragma once

#include "Syns.h"

#ifdef SYNS_PLATFORM_WINDOWS
    extern Syns::Application* Syns::CreateApplication();

    extern "C" {
        JNIEXPORT void JNICALL Java_com_syntaxz_sandbox_SandBoxClient_setup(JNIEnv* _env, jobject _clz) {
            Syns::Log::Init();
            auto app = Syns::CreateApplication();
            app->Run();
        }
    }   
#endif