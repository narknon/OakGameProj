#include "CinematicState.h"

FCinematicState::FCinematicState() {
    this->CinematicTag = NULL;
    this->SequenceTime = 0.00f;
    this->CurrentState = ECinematicState::Inactive;
}

