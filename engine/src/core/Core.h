#pragma once

#ifdef SYNS_PLATFORM_WINDOWS
    #ifdef SYNS_BUILD
        #define SYNS_API __declspec(dllexport)
    #else
        #define SYNS_API __declspec(dllimport)
    #endif
#else
    #error We only support windows right now
#endif