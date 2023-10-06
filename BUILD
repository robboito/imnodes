load("@rules_cc//cc:defs.bzl", "cc_library")

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
