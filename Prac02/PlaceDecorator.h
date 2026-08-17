#ifndef PLACEDECORATOR_H
#define PLACEDECORATOR_H

#include "Place.h"

class PlaceDecorator : public Place {
protected:
    Place* place;

public:
    explicit PlaceDecorator(Place* p);
    ~PlaceDecorator() override;

    PlaceDecorator(const PlaceDecorator&) = delete;
    PlaceDecorator& operator=(const PlaceDecorator&) = delete;
};

class WeatherLocation : public PlaceDecorator {
public:
    explicit WeatherLocation(Place* p);
    void print() const override;
};

class TollLocation : public PlaceDecorator {
public:
    explicit TollLocation(Place* p);
    void print() const override;
};

class QuestLocation : public PlaceDecorator {
public:
    explicit QuestLocation(Place* p);
    void print() const override;
};

#endif
