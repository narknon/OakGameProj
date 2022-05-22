#include "ReplicatedPawnAttachState.h"

FReplicatedPawnAttachState::FReplicatedPawnAttachState() {
    this->Slot = NULL;
    this->Status = EPawnAttachStatus::Unoccupied;
    this->StatusFlag = 0;
}

