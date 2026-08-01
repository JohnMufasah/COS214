#ifndef RESTAPICONNECTOR_H
#define RESTAPICONNECTOR_H

#include "Connector.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class RestApiConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
        RestApiConnector();
};

#endif RESTAPICONNECTOR_H