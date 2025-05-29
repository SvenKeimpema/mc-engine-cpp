#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Syns {
    class SYNS_API Log {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }  
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

// Core Loggers
#define SS_CORE_FATAL(...) ::Syns::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define SS_CORE_ERROR(...) ::Syns::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SS_CORE_WARN(...) ::Syns::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SS_CORE_INFO(...) ::Syns::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SS_CORE_TRACE(...) ::Syns::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client Loggers
#define SS_FATAL(...) ::Syns::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define SS_ERROR(...) ::Syns::Log::GetClientLogger()->error(__VA_ARGS__)
#define SS_WARN(...) ::Syns::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SS_INFO(...) ::Syns::Log::GetClientLogger()->info(__VA_ARGS__)
#define SS_TRACE(...) ::Syns::Log::GetClientLogger()->trace(__VA_ARGS__)