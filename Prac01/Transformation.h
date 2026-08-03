#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Transformation {
    protected:
        std::string name;
    public:
        Transformation(std::string catepillar);
        virtual Transformation* clone() =0;
        virtual std::vector<std::string> apply(std::vector<std::string>) =0;
        std::string getName();
        virtual ~Transformation();
};

class DeduplicateStep: public Transformation {
    public: 
        DeduplicateStep();
        virtual Transformation* clone();
        virtual std::vector<std::string> apply(std::vector<std::string>);
};

class AggregateByRegionStep: public Transformation {
    public: 
        AggregateByRegionStep();
        virtual Transformation* clone();
        virtual std::vector<std::string> apply(std::vector<std::string>);
};

class TransformationRegistry {
    private:
        std::map<std::string, Transformation*> prototypes;
    public: 
        void registerStep(std::string, Transformation*);
        Transformation* create(std::string);
        ~TransformationRegistry();
};

#endif //TRANSFORMATION_H
