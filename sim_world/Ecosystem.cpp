#ifndef ECOSYSTEM_H
#define ECOSYSTEM_H

#include "Organism.h"
#include <vector>

class Ecosystem {
public:
    Ecosystem();
    void update();
    // Add other functions as needed

private:
    std::vector<Organism> organisms;
    // Add other ecosystem parameters and functions as needed
};

#endif // ECOSYSTEM_H
