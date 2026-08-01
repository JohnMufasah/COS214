#include "RunCheckpoint.h"
#include <iostream>

using namespace std;

RunCheckpoint::RunCheckpoint(int stage, vector<string> records) : stage(stage), records(records){
    
}

int RunCheckpoint::getStage(){
    return stage;
}

vector<string> RunCheckpoint::getRecords() {
    return records;
}