#include "ControlledMoveReplicationData.h"

FControlledMoveReplicationData::FControlledMoveReplicationData() {
    this->DirtyCounter = 0;
    this->ControlledMove = NULL;
    this->bZeroVelocity = false;
    this->bInterrupted = false;
}

