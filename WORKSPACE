load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Hedron's Compile Commands Extractor for Bazel
# https://github.com/hedronvision/bazel-compile-commands-extractor
http_archive(
    name = "hedron_compile_commands",
    strip_prefix = "bazel-compile-commands-extractor-e16062717d9b098c3c2ac95717d2b3e661c50608",

    # Replace the commit hash in both places (below) with the latest, rather than using the stale one here.
    # Even better, set up Renovate and let it do the work for you (see "Suggestion: Updates" in the README).
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/e16062717d9b098c3c2ac95717d2b3e661c50608.tar.gz",
    # When you first run this tool, it'll recommend a sha256 hash to put here with a message like: "DEBUG: Rule 'hedron_compile_commands' indicated that a canonical reproducible form can be obtained by modifying arguments sha256 = ..."
)

load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")

hedron_compile_commands_setup()

# GLFW
http_archive(
    name = "com_glfw_glfw",
    build_file = "@//third_party:glfw.BUILD",
    sha256 = "8106e1a432305a8780b986c24922380df6a009a96b2ca590392cb0859062c8ff",
    strip_prefix = "glfw-3.3.8",
    urls = ["https://github.com/glfw/glfw/archive/refs/tags/3.3.8.zip"],
)

# Dear ImGui
http_archive(
    name = "com_ocornut_imgui",
    build_file = "@//third_party:imgui.BUILD",
    sha256 = "d6b21b8a16bd2e03a88ada3f0a2c39fd6a36d14cf4973f4e744ecda7122b5f06",
    strip_prefix = "imgui-1.89.9-docking",
    urls = ["https://github.com/ocornut/imgui/archive/refs/tags/v1.89.9-docking.zip"],
)
