#include "OperativeBarrierState.h"

FOperativeBarrierState::FOperativeBarrierState() {
    this->BarrierState = EOperativeBarrierState::Activating;
    this->bIsTransitioningStates = false;
}

