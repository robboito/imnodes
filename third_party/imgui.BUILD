load("@rules_cc//cc:defs.bzl", "cc_library")

platform(
    name = "macos_arm64",
    constraint_values = [
        "@platforms//os:macos",
        "@platforms//cpu:arm64",
    ],
)

cc_library(
    name = "imgui_glfw",
    srcs = [
        "backends/imgui_impl_glfw.cpp",
        "backends/imgui_impl_opengl3.cpp",
    ],
    hdrs = [
        "backends/imgui_impl_glfw.h",
        "backends/imgui_impl_opengl3.h",
        "backends/imgui_impl_opengl3_loader.h",
    ] + glob([
        "*.h",
    ]),
    linkopts = ["-framework OpenGL"],
    visibility = ["//visibility:private"],
    deps = [
        "@com_glfw_glfw//:glfw_main",
    ],
)

cc_library(
    name = "imgui_main",
    srcs = glob([
        "*.cpp",
    ]),
    hdrs = glob([
        "*.h",
    ]),
    defines = [
        # "GL_SILENCE_DEPRECATION",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@com_ocornut_imgui//:imgui_glfw",
    ],
)
