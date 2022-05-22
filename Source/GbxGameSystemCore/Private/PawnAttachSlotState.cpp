#include "PawnAttachSlotState.h"

FPawnAttachSlotState::FPawnAttachSlotState() {
    this->Owner = NULL;
    this->Pawn = NULL;
    this->Controller = NULL;
    this->Status = EPawnAttachStatus::Unoccupied;
    this->bSkipDetachPlacement = false;
    this->bSkipStopTransitionAction = false;
    this->DetachTransitionIndex = 0;
}

