#include "Region.h"
#include <algorithm>
#include <iostream>

Region::Region(const std::string& n) : name(n) {}

Region::~Region() {
    for (Place* child : children) {
        delete child;
    }
    children.clear();
}

void Region::add(Place* p) {
    children.push_back(p);
}

void Region::remove(Place* p) {
    auto it = std::find(children.begin(), children.end(), p);
    if (it != children.end()) {
        children.erase(it);
    }
}

void Region::print() const {
    std::cout << name << " [ ";
    for (size_t i = 0; i < children.size(); ++i) {
        children[i]->print();
        if (i + 1 < children.size()) std::cout << ", ";
    }
    std::cout << " ]";
}
