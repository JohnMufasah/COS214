#include "RouteStrategy.h"
#include <iostream>

void ShortestRoute::calculateRoute()
{
    std::cout << "Calculating the shortest route." << std::endl;
}

void FastestRoute::calculateRoute()
{
    std::cout << "Calculating the fastest route." << std::endl;
}

void ScenicRoute::calculateRoute()
{
    std::cout << "Calculating the most scenic route." << std::endl;
}

void CheapestRoute::calculateRoute()
{
    std::cout << "Calculating the cheapest route." << std::endl;
}