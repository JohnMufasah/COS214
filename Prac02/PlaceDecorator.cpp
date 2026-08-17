#include "PlaceDecorator.h"
#include <iostream>

PlaceDecorator::PlaceDecorator(Place* p) : place(p) {}

PlaceDecorator::~PlaceDecorator() {
    delete place;
}

WeatherLocation::WeatherLocation(Place* p) : PlaceDecorator(p) {}

void WeatherLocation::print() const {
    std::cout << "[stormy] ";
    place->print();
}

TollLocation::TollLocation(Place* p) : PlaceDecorator(p) {}

void TollLocation::print() const {
    place->print();
    std::cout << " (toll: R20)";
}

QuestLocation::QuestLocation(Place* p) : PlaceDecorator(p) {}

void QuestLocation::print() const {
    place->print();
    std::cout << " {quest available}";
}
