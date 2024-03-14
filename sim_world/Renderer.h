#ifndef RENDERER_H
#define RENDERER_H

#include "Ecosystem.h"

class Renderer {
public:
    Renderer();
    void init();
    void render(const Ecosystem& ecosystem);
    void cleanup();
    bool isRunning() const;
    // Add other functions as needed

private:
    // OpenGL rendering setup and state
};

#endif // RENDERER_H
