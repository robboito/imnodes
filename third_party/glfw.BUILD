load("@rules_cc//cc:defs.bzl", "cc_library", "objc_library")

objc_library(
    name = "glfw_objc",
    srcs = [
        "src/cocoa_init.m",
        "src/cocoa_joystick.m",
        "src/cocoa_monitor.m",
        "src/cocoa_time.c",
        "src/cocoa_window.m",
        "src/context.c",
        "src/egl_context.c",
        "src/init.c",
        "src/input.c",
        "src/monitor.c",
        "src/nsgl_context.m",
        "src/osmesa_context.c",
        "src/posix_thread.c",
        "src/vulkan.c",
        "src/window.c",
        "src/xkb_unicode.c",
        "src/xkb_unicode.h",
    ],
    hdrs = [
        "include/GLFW/glfw3.h",
        "include/GLFW/glfw3native.h",
        "src/cocoa_joystick.h",
        "src/cocoa_platform.h",
        "src/egl_context.h",
        "src/internal.h",
        "src/mappings.h",
        "src/nsgl_context.h",
        "src/osmesa_context.h",
        "src/posix_thread.h",
        "src/xkb_unicode.h",
    ],
    copts = [
        "-fno-objc-arc",
    ],
    defines =
        [
            "_GLFW_COCOA",
            "GLFW_INVALID_CODEPOINT=0xffffffffu",  # Not sure why this isn't found inside "src/xkb_unicode.h"
            "GL_SILENCE_DEPRECATION",
        ],
    linkopts = [
        "-framework Cocoa",
        "-framework IOKit",
        "-framework CoreFoundation",
    ],
    visibility = ["//visibility:private"],
)

cc_library(
    name = "glfw_main",
    hdrs = [
        "include/GLFW/glfw3.h",
        "include/GLFW/glfw3native.h",
    ],
    strip_include_prefix = "include",
    visibility = ["//visibility:public"],
    deps = [
        "@com_glfw_glfw//:glfw_objc",
    ],
)
