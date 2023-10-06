load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "imnodes",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.h"]),
    copts = [
        "-std=c++20",
        "-Werror",
        "-Wall",
        "-Wextra",
        "-Wpedantic",
    ],
    local_defines = ["IMGUI_DEFINE_MATH_OPERATORS"],
    visibility = ["//visibility:public"],
    deps = [
        "@com_glfw_glfw//:glfw_main",
        "@com_ocornut_imgui//:imgui_main",
    ],
)

cc_binary(
    name = "color_node_editor",
    srcs = [
        "example/color_node_editor.cpp",
        "example/graph.h",
        "example/main.cpp",
        "example/node_editor.h",
    ],
    copts = [
        "-std=c++20",
        "-Werror",
        "-Wall",
    ],
    deps = [
        "@//:imnodes",
        "@com_glfw_glfw//:glfw_main",
        "@com_ocornut_imgui//:imgui_main",
    ],
)

cc_binary(
    name = "multi_editor",
    srcs = [
        "example/graph.h",
        "example/main.cpp",
        "example/multi_editor.cpp",
        "example/node_editor.h",
    ],
    copts = [
        "-std=c++20",
        "-Werror",
        "-Wall",
    ],
    deps = [
        "@//:imnodes",
        "@com_glfw_glfw//:glfw_main",
        "@com_ocornut_imgui//:imgui_main",
    ],
)

cc_binary(
    name = "save_load",
    srcs = [
        "example/graph.h",
        "example/main.cpp",
        "example/node_editor.h",
        "example/save_load.cpp",
    ],
    copts = [
        "-std=c++20",
        "-Werror",
        "-Wall",
    ],
    deps = [
        "@//:imnodes",
        "@com_glfw_glfw//:glfw_main",
        "@com_ocornut_imgui//:imgui_main",
    ],
)

cc_binary(
    name = "hello",
    srcs = [
        "example/graph.h",
        "example/hello.cpp",
        "example/main.cpp",
        "example/node_editor.h",
    ],
    copts = [
        "-std=c++20",
        "-Werror",
        "-Wall",
    ],
    deps = [
        "@//:imnodes",
        "@com_glfw_glfw//:glfw_main",
        "@com_ocornut_imgui//:imgui_main",
    ],
)
