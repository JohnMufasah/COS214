#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H

#include <string>

class RouteStrategy {
    public:
        virtual void calculateRoute() = 0;
        virtual ~RouteStrategy() {}
};

class ShortestRoute : public RouteStrategy {
    public:
        void calculateRoute() override;
};

class FastestRoute : public RouteStrategy {
    public:
        void calculateRoute() override;
};

class ScenicRoute : public RouteStrategy {
    public:
        void calculateRoute() override;
};

class CheapestRoute : public RouteStrategy {
    public:
        void calculateRoute() override;
};

#endif