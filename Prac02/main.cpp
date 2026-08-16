#include "Trip.h"

int main()
{
    Trip trip(new ShortestRoute());

    trip.calculateRoute();

    trip.setStrategy(new FastestRoute());
    trip.calculateRoute();

    trip.setStrategy(new ScenicRoute());
    trip.calculateRoute();

    trip.setStrategy(new CheapestRoute());
    trip.calculateRoute();

    return 0;
}