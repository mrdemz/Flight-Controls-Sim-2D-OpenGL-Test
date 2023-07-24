#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

class BackgroundRenderer {
public:
    BackgroundRenderer() {
        // Initialize GLFW
        if (!glfwInit()) {
            std::cerr << "Failed to initialize GLFW" << std::endl;
            // Handle error
        }

        // Create a window
        window = glfwCreateWindow(800, 600, "Background", nullptr, nullptr);
        if (!window) {
            std::cerr << "Failed to create GLFW window" << std::endl;
            glfwTerminate();
            // Handle error
        }

        // Make the created window the current context
        glfwMakeContextCurrent(window);

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

    void render() {
        // Clear the screen
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Render the background objects (blue rectangle, white broken lines, etc.)

        // Swap buffers and poll events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    ~BackgroundRenderer() {
        // Cleanup GLFW
        glfwTerminate();
    }

private:
    GLFWwindow* window;
};

