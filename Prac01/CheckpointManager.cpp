#include "CheckpointManager.h"
#include "RunCheckpoint.h"
#include <iostream>

using namespace std;

void CheckpointManager::save(RunCheckpoint* checkpoint){
    checkpoints.push_back(checkpoint);
}

RunCheckpoint* CheckpointManager::undo(){
    if (checkpoints.empty()){
        return nullptr;
    }

    RunCheckpoint* checkpoint = checkpoints.back();

    checkpoints.pop_back();

    return checkpoint;
}

CheckpointManager::~CheckpointManager(){}