#ifndef PLACE_H
#define PLACE_H
#include <string>

class Place {
    protected:
        std::string name;
    
        public:
            Place(std::string name);
            virtual void display() = 0;
            virtual ~Place() {}
};

#endif