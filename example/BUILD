load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "color_node_editor",
    srcs = [
        "color_node_editor.cpp",
        "graph.h",
        "main.cpp",
        "node_editor.h",
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
        "graph.h",
        "main.cpp",
        "multi_editor.cpp",
        "node_editor.h",
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
        "graph.h",
        "main.cpp",
        "node_editor.h",
        "save_load.cpp",
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
        "graph.h",
        "hello.cpp",
        "main.cpp",
        "node_editor.h",
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
