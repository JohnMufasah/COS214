#include "Traveller.h"
#include <iostream>

using namespace std;

Traveller::Traveller() {
    currentState = new WalkState();
    hasBicycle = true;
    hasCar = true;
    hasAircraft = true;

}

void Traveller::move() {
    currentState->move();
}

void Traveller::switchToBike(){
    if(hasBicycle) {
        delete currentState;
        currentState = new BikeState();
        cout << "Switched to bicycle." << endl;
    } else {
        cout << "Cannot switch to bicycle." << endl;
    }
}

void Traveller::switchToCar() {
    if(hasCar) {
        delete currentState;
        currentState = new CarState();

        cout << "Switched to car." << endl;
    } else {
        cout << "Cannot switch to car." << endl;
    }
}

void Traveller::switchToAir() {
    if(hasAircraft) {
        delete currentState;
        currentState = new AirState();
        cout << "Switched to air travel." << endl;
    } else {
        cout << "Cannot switch to air travel." << endl;
    }
}

Traveller::~Traveller() {
    delete currentState;
}