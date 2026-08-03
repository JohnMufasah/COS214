#ifndef RESTAPIFACTORY_H
#define RESTAPIFACTORY_H

#include "ConnectorFactory.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class RestApiFactory: public ConnectorFactory {
    public: 
        Connector* createConnector() override;
};

#endif //RESTAPIFACTORY_H
