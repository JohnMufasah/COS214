#include "Location.h"
#include <iostream>

using namespace std;
//location is a leaf, so it has no children
Location::Location(std::string name) : Place(name) {
    
}

void Location::display() {
    cout << "Location: " << name << endl;
}