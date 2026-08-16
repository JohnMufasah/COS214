#include "Trip.h"

Trip::Trip(RouteStrategy* strategy)
{
    this->strategy = strategy;
}

void Trip::setStrategy(RouteStrategy* strategy)
{
    delete this->strategy;

    this->strategy = strategy;
}

void Trip::calculateRoute()
{
    strategy->calculateRoute();
}

Trip::~Trip()
{
    delete strategy;
}