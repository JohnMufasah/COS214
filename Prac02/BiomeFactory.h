#ifndef BIOMEFACTORY_H
#define BIOMEFACTORY_H

#include "Terrain.h"
#include "NPC.h"
#include "Obstacle.h"

class BiomeFactory
{
public:
    virtual Terrain* createTerrain() = 0;
    virtual NPC* createNPC() = 0;
    virtual Obstacle* createObstacle() = 0;

    virtual ~BiomeFactory() {}
};

class DesertFactory : public BiomeFactory
{
public:
    Terrain* createTerrain() override;
    NPC* createNPC() override;
    Obstacle* createObstacle() override;
};

class ForestFactory : public BiomeFactory
{
public:
    Terrain* createTerrain() override;
    NPC* createNPC() override;
    Obstacle* createObstacle() override;
};

#endif