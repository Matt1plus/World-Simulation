#include "Renderer.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>

Renderer::Renderer() {
    // Constructor
}

void Renderer::init() {
    // Initialize GLFW
    if (!glfwInit()) {
        // Handle initialization failure
    }

    // Create a windowed mode window and its OpenGL context
    GLFWwindow* window = glfwCreateWindow(800, 600, "Ecosystem Simulation", NULL, NULL);
    if (!window) {
        glfwTerminate();
        // Handle window creation failure
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    GLenum err = glewInit();
    if (err != GLEW_OK) {
        // Handle GLEW initialization failure
    }

    // Set the background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void Renderer::render(const Ecosystem& ecosystem) {
    // Clear the color buffer
    glClear(GL_COLOR_BUFFER_BIT);

    // Render the ecosystem using OpenGL
    // Visualize organisms, environment, etc.

    // Swap front and back buffers
    glfwSwapBuffers(window);

    // Poll for and process events
    glfwPollEvents();
}

void Renderer::cleanup() {
    // Cleanup GLFW
    glfwTerminate();
}

bool Renderer::isRunning() const {
    // Check if the simulation/rendering loop should continue
    // For example, check for user input or simulation termination conditions
    return !glfwWindowShouldClose(window);
}
    