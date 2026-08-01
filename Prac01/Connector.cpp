#include "Connector.h"

Connector::Connector(std::string so) {
    this->source = so;
}

std::string Connector::getSource(){
    return source;
}

Connector::~Connector() {}