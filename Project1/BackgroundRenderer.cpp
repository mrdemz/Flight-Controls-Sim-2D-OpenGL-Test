#include "BackgroundRenderer.h"

BackgroundRenderer::BackgroundRenderer(GLFWwindow* sharedWindow)
{
    // Make the shared window the current context
    glfwMakeContextCurrent(sharedWindow);

    // Initialize GLEW
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        // Handle error
    }

    // Set viewport size
    glViewport(0, 0, 800, 600);

    // Set clear color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // Enable depth testing
    glEnable(GL_DEPTH_TEST);
}

void BackgroundRenderer::render()
{
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Render the background objects (blue rectangle, white broken lines, etc.)

    // Swap buffers and poll events
    glfwSwapBuffers(sharedWindow);
    glfwPollEvents();
}
