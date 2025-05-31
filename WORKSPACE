load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


# Vulkan

git_repository(
    name = "rules_vulkan",
    remote = "https://github.com/jadarve/rules_vulkan.git",
    tag = "v0.0.11"
)

load("@rules_vulkan//vulkan:repositories.bzl", "vulkan_repositories")

vulkan_repositories()

# GLM

GLM_VERSION = "0.9.9.8"

http_archive(
    name = "glm",
    build_file = "@//vendor/glm:glm.BUILD",
    sha256 = "4605259c22feadf35388c027f07b345ad3aa3b12631a5a316347f7566c6f1839",
    strip_prefix = "glm-{}".format(GLM_VERSION),
    urls = ["https://github.com/g-truc/glm/archive/{}.zip".format(GLM_VERSION)],
)

# GLFW

GLFW_VERSION = "3.3.5"

http_archive(
    name = "glfw",
    build_file = "@//vendor/glfw:glfw.BUILD",
    sha256 = "a89bb6074bc12bc12fcd322dcf848af81b679ccdc695f70b29ca8a9aa066684b",
    strip_prefix = "glfw-{}".format(GLFW_VERSION),
    urls = ["https://github.com/glfw/glfw/archive/{}.zip".format(GLFW_VERSION)],
)

http_archive(
    name = "rules_cc",
    urls = ["https://github.com/bazelbuild/rules_cc/releases/download/0.1.1/rules_cc-0.1.1.tar.gz"],
    sha256 = "712d77868b3152dd618c4d64faaddefcc5965f90f5de6e6dd1d5ddcd0be82d42",
    strip_prefix = "rules_cc-0.1.1",
)

# ImGui Backends
http_archive(
    name = "imgui_backends",
    build_file = "@//vendor/imgui_backends:imgui_backends.BUILD",
    sha256 = "a4c0c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3c5c3",
    strip_prefix = "imgui-1.89.9",
    urls = ["https://github.com/ocornut/imgui/archive/v1.89.9.zip"],
)