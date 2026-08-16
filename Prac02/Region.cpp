#include "Region.h"
#include <iostream>

using namespace std;

Region::Region(std::string name) : Place(name) {

}

void Region::add(Place* place) {
    children.push_back(place);
}

void Region::display() {
    cout << "Region: " << name << endl;

    for(Place* place : children) {
        place->display();
    }
}

Region::~Region() {
    for (Place* place : children) {
        delete place;
    }
}