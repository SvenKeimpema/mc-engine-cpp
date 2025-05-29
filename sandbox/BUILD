load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "sandbox",
    srcs = glob(["src/**/*.cpp"]),
    includes = ["src"],
    copts = ["/utf-8"] if select({
        "@bazel_tools//src/conditions:windows": True,
        "//conditions:default": False,
    }) else [],
    deps = [
        "//engine",
        "//vendor/jni:jni_headers",
    ],
    linkshared = True,
)