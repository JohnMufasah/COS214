#ifndef CSVCONNECTOR_H
#define CSVCONNECTOR_H

#include "Connector.h"

#include <iostream>
#include <string>
#include <map>
#include <vector>

class CsvConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
        CsvConnector();
};

#endif //CSVCONNECTOR_H
