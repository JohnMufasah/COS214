#ifndef CONNECTORFACTORY_H
#define CONNECTORFACTORY_H

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Connector;

class ConnectorFactory {
    public:
        virtual Connector* createConnector() = 0;
        virtual ~ConnectorFactory();
};

#endif //CONNECTORFACTORY_H
