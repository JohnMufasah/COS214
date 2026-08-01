#include "Transformation.h"

Transformation::Transformation(std::string caterpillar) {
    this->name = caterpillar;
}

std::string Transformation::getName() {
    return name;
}

Transformation::~Transformation() {}

DeduplicateStep::DeduplicateStep() : Transformation("dedup") {}

AggregateByRegionStep::AggregateByRegionStep() : Transformation("aggregate") {}

Transformation* DeduplicateStep::clone() {
    return new DeduplicateStep();
}

Transformation* AggregateByRegionStep::clone() {
    return new AggregateByRegionStep();
}

std::vector<std::string> DeduplicateStep::apply(std::vector<std::string> so) {
    std::vector<std::string> result;
    for (size_t i = 0; i < so.size(); i++) {
        if (i == 0 || so[i] != so[i - 1]) {
            result.push_back(so[i]);
        }
    }
    return result;
}

std::vector<std::string> AggregateByRegionStep::apply(std::vector<std::string> so) {
    return {"COUNT=" + std::to_string(so.size())};
}

void TransformationRegistry::registerStep(std::string key, Transformation* prototype) {
    auto it = prototypes.find(key);
    if (it != prototypes.end()) {
        delete it->second;      
    }
    prototypes[key] = prototype;
}

Transformation* TransformationRegistry::create(std::string key) {
    auto it = prototypes.find(key);
    if (it == prototypes.end()) {
        return nullptr;
    }
    return it->second->clone();
}

TransformationRegistry::~TransformationRegistry() {
    for (auto& pair : prototypes) {
        delete pair.second;
    }
}