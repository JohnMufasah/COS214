#ifndef CHECKPOINTMANAGER_H
#define CHECKPOINTMANAGER_H

#include <vector>

using namespace std;

class RunCheckpoint;

class CheckpointManager {
    private:
         vector<RunCheckpoint*> checkpoints;

    public:
        void save(RunCheckpoint* checkpoint);

        RunCheckpoint* undo();

        ~CheckpointManager();
};

#endif