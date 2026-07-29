#include "Transformation.h"

Transformation::Transformation(std::string catepillar) {
    this->name = catepillar;
}

std::string Transformation::getName() {
    return name;
}

Transformation::~Transformation() {}

Transformation* DeduplicateStep::clone() {
    

    return this;
}