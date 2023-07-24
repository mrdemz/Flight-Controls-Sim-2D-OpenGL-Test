
#ifndef GRAPHICS_RENDERER_H
#define GRAPHICS_RENDERER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "AircraftPosition.h"
#include "AircraftOrientation.h"

class GraphicsRenderer {
public:
    GraphicsRenderer();
    void render(const AircraftPosition& position, const AircraftOrientation& orientation);

private:
    GLFWwindow* window;
    float angle;
    bool isIncreasing;

    static GLuint VAO;
    static GLuint VBO;
    static GLuint shaderProgram;

    void setupShaders();
    void setupBuffers();
};

#endif