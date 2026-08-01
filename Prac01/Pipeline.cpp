#include "Pipeline.h"
#include "RunCheckpoint.h"
#include <iostream>
#include <vector>


using namespace std;

Pipeline::Pipeline(ConnectorFactory* factory) : factory(factory), stage(0){

}

void Pipeline:: addStep(Transformation* step){
    steps.push_back(step);
}

Pipeline::~Pipeline() {
    delete factory;

    for(Transformation* step : steps) {
        delete step;
    }
}

void Pipeline::run(){
    connect();
    extract();
    transform();
    load();
}

void Pipeline::connect(){
    Connector* connector = factory->createConnector();

    cout << "Connecting to " << connector->getSource() << endl;

    stage = 1;

    delete connector;
}

void Pipeline::transform() {
    for(Transformation* step : steps) {
        records = step->apply(records);
    }

    stage = 3;
}

RunCheckpoint* Pipeline::createCheckpoint()
{
    return new RunCheckpoint(stage, records);
}

void Pipeline::restore(RunCheckpoint* checkpoint)
{
    stage = checkpoint->getStage();
    records = checkpoint->getRecords();
}

BatchPipeline::BatchPipeline(ConnectorFactory* factory)
    : Pipeline(factory)
{
}

void BatchPipeline::extract()
{
    Connector* connector = factory->createConnector();

    records = connector->extract();

    cout << "Batch extract: "
         << records.size()
         << " records"
         << endl;

    stage = 2;

    delete connector;
}


void BatchPipeline::load()
{
    cout << "Batch load: "
         << records.size()
         << " records written"
         << endl;

    stage = 4;
}


StreamingPipeline::StreamingPipeline(ConnectorFactory* factory)
    : Pipeline(factory)
{
}

void StreamingPipeline::extract()
{
    Connector* connector = factory->createConnector();

    records = connector->extract();

    cout << "Streaming extract: "
         << records.size()
         << " records"
         << endl;

    stage = 2;

    delete connector;
}


void StreamingPipeline::load()
{
    cout << "Streaming load: "
         << records.size()
         << " records streamed"
         << endl;

    stage = 4;
}

