#ifndef PIPELINE_H
#define PIPELINE_H

#include <vector>
#include <string>

using namespace std;

class ConnectorFactory;
class Transformation;
class RunCheckpoint;

class Pipeline
{
protected:
    ConnectorFactory* factory;
    vector<Transformation*> steps;
    int stage;
    vector<string> records;

public:
    Pipeline(ConnectorFactory* factory);

    void run(); 

    void addStep(Transformation* step);

    RunCheckpoint* createCheckpoint();

    void restore(RunCheckpoint* checkpoint);

    virtual ~Pipeline();

protected:
    void connect();

    virtual void extract() = 0; 
    void transform();

    virtual void load() = 0; 
};
class BatchPipeline : public Pipeline
{
public:
    BatchPipeline(ConnectorFactory* factory);

protected:
    void extract() override;
    void load() override;
};

class StreamingPipeline : public Pipeline
{
public:
    StreamingPipeline(ConnectorFactory* factory);

protected:
    void extract() override;
    void load() override;
};

#endif