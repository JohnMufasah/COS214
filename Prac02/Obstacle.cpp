#include "Obstacle.h"
#include <iostream>

void DesertObstacle::describe()
{
    std::cout << "Desert obstacle: sandstorm." << std::endl;
}

void ForestObstacle::describe()
{
    std::cout << "Forest obstacle: fallen tree." << std::endl;
}