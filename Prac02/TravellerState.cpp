#include "TravellerState.h"
#include <iostream>

using namespace std;
//yho, i did not include the Traveller code here because it is a different participant
void WalkState::move(){
    cout << "Traveller is walking." << endl;
}

void BikeState::move(){
    cout << "Traveller is riding a bicycle." << endl;
}

void CarState::move(){
    cout << "Traveller is driving a car." << endl;
}

void AirState::move(){
    cout << "Traveller is travelling by air." << endl;
}