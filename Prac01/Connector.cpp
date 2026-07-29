#include "Connector.h"

Connector::Connector(std::string so) {
    this->source = so;
}

std::string Connector::getSource(){
    return source;
}

std::vector<std::string> PostgresConnector::extract() {
    std::vector<std::string> ;
}

std::vector<std::string> RestApiConnector::extract() {}

std::vector<std::string> CsvConnector::extract() {}