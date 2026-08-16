#ifndef TRIP_H
#define TRIP_H

#include "RouteStrategy.h"

class Trip {
    private:
        RouteStrategy* strategy;

    public:
        Trip(RouteStrategy* strategy);
        void setStrategy(RouteStrategy* strategy);
        void calculateRoute();
        ~Trip();
};


#endif