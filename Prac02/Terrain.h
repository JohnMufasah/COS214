#ifndef TERRAIN_H
#define TERRAIN_H

class Terrain {
    public:
        virtual void describe() = 0;
        virtual ~Terrain() {}
};

class DesertTerrain : public Terrain {
    public:
        void describe() override;
};

class ForestTerrain : public Terrain {
    public:
        void describe() override;
};

#endif