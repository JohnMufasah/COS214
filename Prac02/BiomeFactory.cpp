#include "BiomeFactory.h"

Terrain* DesertFactory::createTerrain()
{
    return new DesertTerrain();
}

NPC* DesertFactory::createNPC()
{
    return new DesertNPC();
}

Obstacle* DesertFactory::createObstacle()
{
    return new DesertObstacle();
}

Terrain* ForestFactory::createTerrain()
{
    return new ForestTerrain();
}

NPC* ForestFactory::createNPC()
{
    return new ForestNPC();
}

Obstacle* ForestFactory::createObstacle()
{
    return new ForestObstacle();
}