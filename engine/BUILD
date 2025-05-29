package(default_visibility = ["//visibility:public"])

cc_library(
    name = "engine",
    srcs = glob(["src/**/*.cpp", "src/**/*.h"]),
    includes = ["src"],
    defines = ["SYNS_PLATFORM_WINDOWS", "SYNS_BUILD"],
    copts = ["/utf-8"] if select({
        "@bazel_tools//src/conditions:windows": True,
        "//conditions:default": False,
    }) else [],
    deps = [
        "//vendor/glfw",
        "//vendor/glm",
        "@spdlog//:spdlog",
        "@rules_vulkan//vulkan:vulkan_cc_library",
        "//vendor/jni:jni_headers",
    ],
)