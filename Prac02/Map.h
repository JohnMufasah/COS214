#ifndef MAP_H
#define MAP_H

#include "Place.h"

class Map {
private:
    Place* root;

public:
    explicit Map(Place* root);
    ~Map();

    Map(const Map&) = delete;
    Map& operator=(const Map&) = delete;

    void print() const;
};

#endif
