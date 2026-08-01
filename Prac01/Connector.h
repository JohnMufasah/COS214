#ifndef CONNECTOR_H
#define CONNECTOR_H

#include "Connector.h"
#include "RestApiFactory.h"
#include "CsvFactory.h"
#include "PostgresFactory.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Connector {
    protected:
        std::string source;
    public: 
        Connector(std::string so);
        virtual std::vector<std::string> extract() =0;
        std::string getSource();
        virtual ~Connector();
};

class PostgresConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
        PostgresConnector();
};

class RestApiConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
        RestApiConnector();
};

class CsvConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
        CsvConnector();
};

#endif CONNECTOR_H