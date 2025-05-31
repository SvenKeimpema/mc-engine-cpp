package(default_visibility = ["//visibility:public"])
load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "imgui_backends",
    srcs = [
        "include/imgui_impl_opengl3.cpp",
        "include/imgui_impl_glfw.cpp",
    ],
    hdrs = [
        "include/imgui_impl_opengl3.h",
        "include/imgui_impl_glfw.h",
        "include/imgui_impl_opengl3_loader.h"
    ],
    includes = ["."],
    deps = [
        "@imgui//:imgui",
        "//vendor/glfw",
    ],
    visibility = ["//visibility:public"],
)