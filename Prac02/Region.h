#ifndef REGION_H
#define REGION_H

#include "Place.h"
#include <string>
#include <vector>

class Region : public Place {
private:
    std::string name;
    std::vector<Place*> children;

public:
    explicit Region(const std::string& name);
    ~Region() override;

    Region(const Region&) = delete;
    Region& operator=(const Region&) = delete;

    void add(Place* p);
    void remove(Place* p);
    void print() const override;
};

#endif
