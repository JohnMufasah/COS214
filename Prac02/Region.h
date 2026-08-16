#ifndef REGION_H
#define REGION_H

#include "Place.h"
#include <vector>

class Region : public Place {
    private:
        std::vector<Place*> children;
    
        public:
            Region(std::string name);
            void add(Place* place);
            void display() override;

            ~Region();
};

#endif