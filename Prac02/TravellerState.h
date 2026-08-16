#ifndef TRAVELLERSTATE_H
#define TRAVELLERSTATE_H

class TravellerState {
    public:
        virtual void move() = 0;
        virtual ~TravellerState() {}

};

class WalkState : public TravellerState {
    public:
        void move() override;

};

class BikeState : public TravellerState {
    public:
        void move() override;
};

class CarState : public TravellerState {
    public:
        void move() override;
};

class AirState : public TravellerState {
    public:
        void move() override;
};


#endif