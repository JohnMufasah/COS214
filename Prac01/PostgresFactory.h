#ifndef POSTGRESFACTORY_H
#define POSTGRESFACTORY_H

#include "ConnectorFactory.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class PostgresFactory: public ConnectorFactory {
    public: 
        Connector* createConnector() override;
};

#endif //POSTGRESFACTORY_H
