#ifndef BACKGROUND_RENDERER_H
#define BACKGROUND_RENDERER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

class BackgroundRenderer {
public:
    BackgroundRenderer(GLFWwindow* sharedWindow);
    void render();

private:
    GLFWwindow* sharedWindow;
};

#endif
