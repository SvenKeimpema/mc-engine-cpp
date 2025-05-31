#pragma once

#include "jni.h"

#ifdef SYNS_PLATFORM_WINDOWS
    extern "C" {
        JNIEXPORT void JNICALL Java_com_syntaxz_sandbox_SandBoxClient_setup(JNIEnv* _env, jobject _clz, jlong windowPtr) {
            Syns::Log::Init();
            SS_CORE_INFO("Initialized Logger");
            auto app = Syns::CreateApplication();
        }

        JNIEXPORT void JNICALL Java_com_syntaxz_sandbox_SandBoxClient_update(JNIEnv* _env, jobject _clz, jlong windowPtr) {
            Syns::Application::GetApplication()->Update();
        }
    }   
#endif