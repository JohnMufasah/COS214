#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <iostream>
#include <string>
#include <map>
#include <vector>

class ConnectorFactory {
    public:
        virtual Connector* createConnector() = 0;
        virtual ~ConnectorFactory();
};

class PostgresFactory: public ConnectorFactory {
    public: 
        Connector* createConnector();
};

class RestApiFactory: public ConnectorFactory {
    public: 
        Connector* createConnector();
};

class CsvFactory: public ConnectorFactory {
    public: 
        Connector* createConnector();
};

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
};

class RestApiConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
};

class CsvConnector: public Connector {
    public: 
        std::vector<std::string> extract() override;
};

#endif CONNECTOR_H