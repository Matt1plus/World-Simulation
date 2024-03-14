#include "Ecosystem.h"
#include "Renderer.h"

int main() {
    Ecosystem ecosystem;
    Renderer renderer;

    renderer.init(); // Initialize renderer

    while (renderer.isRunning()) {
        ecosystem.update();
        renderer.render(ecosystem);
    }

    renderer.cleanup(); // Cleanup renderer

    return 0;
}
