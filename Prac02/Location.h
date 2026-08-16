#ifndef LOCATIONN_H
#define LOCATION_H
#include "Place.h"

class Location : public Place {
    public:
        Location(std::string name);
        void display() override;
};

#endif