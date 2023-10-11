#include <cstdio>
#include <cstdlib>
#include <functional>
#include <iostream>

#include <GLFW/glfw3.h>
#include <imgui/backends/imgui_impl_glfw.h>
#include <imgui/backends/imgui_impl_opengl3.h>
#include <imgui/imgui.h>
#include <imnodes/imnodes.h>

#include "./node_editor.h"

static inline void ErrorCallback(int error, const char *description) {
  fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}

// The callbacks are updated and called BEFORE the Update loop is entered
// It can be assumed that inside the Update loop all callbacks have already
// been processed
static void MouseButtonCallback(GLFWwindow *window, int button, int action,
                                int mods) {
  // For Dear ImGui to work it is necessary to queue if the mouse signal is
  // already processed by Dear ImGui Only if the mouse is not already captured
  // it should be used here.
  ImGuiIO &io = ImGui::GetIO();
  if (!io.WantCaptureMouse) {
  }
}

static void CursorPosCallback(GLFWwindow *window, double xpos, double ypos) {
  // For Dear ImGui to work it is necessary to queue if the mouse signal is
  // already processed by Dear ImGui Only if the mouse is not already captured
  // it should be used here.
  ImGuiIO &io = ImGui::GetIO();
  if (!io.WantCaptureMouse) {
  }
}

static void KeyCallback(GLFWwindow *window, int key, int scancode, int actions,
                        int mods) {
  // For Dear ImGui to work it is necessary to queue if the keyboard signal is
  // already processed by Dear ImGui Only if the keyboard is not already
  // captured it should be used here.
  ImGuiIO &io = ImGui::GetIO();
  if (!io.WantCaptureKeyboard) {
  }
}

int main(int, char **) {
  glfwSetErrorCallback(ErrorCallback);

  if (!glfwInit())
    std::exit(1);

  const char *glsl_version = "#version 330";
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  // Create window with graphics context
  GLFWwindow *window =
      glfwCreateWindow(1280, 720, "Default App", nullptr, nullptr);
  if (window == NULL)
    std::exit(1);

  glfwSetWindowSize(window, 1280, 720);
  glfwMakeContextCurrent(window);
  glfwSwapInterval(1);

  // Add window based callbacks to the underlying app
  glfwSetMouseButtonCallback(window, &MouseButtonCallback);
  glfwSetCursorPosCallback(window, &CursorPosCallback);
  glfwSetKeyCallback(window, &KeyCallback);

  // Setup Dear ImGui context
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO &io = ImGui::GetIO();
  (void)io;

  ImNodes::CreateContext();
  example::NodeEditorInitialize();

  // Setup Dear ImGui style
  ImGui::StyleColorsDark();
  // ImGui::StyleColorsClassic();
  ImNodes::StyleColorsDark();

  // Setup Platform/Renderer backends
  ImGui_ImplGlfw_InitForOpenGL(window, true);
  ImGui_ImplOpenGL3_Init(glsl_version);

  ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

  while (!glfwWindowShouldClose(window)) {
    // Poll events like key presses, mouse movements etc.
    glfwPollEvents();

    // Start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();

    example::NodeEditorShow();

    // Rendering
    ImGui::Render();
    int display_w, display_h;
    glfwGetFramebufferSize(window, &display_w, &display_h);
    glViewport(0, 0, display_w, display_h);
    glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w,
                 clear_color.z * clear_color.w, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    glfwSwapBuffers(window);
  }

  // Cleanup
  ImGui_ImplOpenGL3_Shutdown();
  ImGui_ImplGlfw_Shutdown();

  example::NodeEditorShutdown();
  ImNodes::DestroyContext();
  ImGui::DestroyContext();

  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}
