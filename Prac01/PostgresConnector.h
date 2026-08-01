#ifndef POSTGRESCONNECTOR_H
#define POSTGRESCONNECTOR_H

#include "Connector.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class PostgresConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
        PostgresConnector();
};

#endif POSTGRESCONNECTOR_H