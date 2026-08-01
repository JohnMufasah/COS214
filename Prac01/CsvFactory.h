#ifndef CSVFACTORY_H
#define CSVFACTORY_H

#include "ConnectorFactory.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class CsvFactory: public ConnectorFactory {
    public: 
        Connector* createConnector() override;
};

#endif CSVFACTORY_H