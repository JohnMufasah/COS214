#ifndef LOCATION_H
#define LOCATION_H

#include "Place.h"
#include <string>

class Location : public Place {
private:
    std::string name;

public:
    explicit Location(const std::string& name);
    void print() const override;
};

#endif
