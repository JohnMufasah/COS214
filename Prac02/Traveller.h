#ifndef TRAVELLER_H
#define TRAVELLER_H

#include "TravellerState.h"

class Traveller {
    private:
        TravellerState* currentState;
        bool hasBicycle;
        bool hasCar;
        bool hasAircraft;

    public:
        Traveller();
        void move();
        void switchToBike();
        void switchToCar();
        void switchToAir();

        ~Traveller();
};

#endif