#include "Location.h"
#include <iostream>

Location::Location(const std::string& n) : name(n) {}

void Location::print() const {
    std::cout << name;
}
