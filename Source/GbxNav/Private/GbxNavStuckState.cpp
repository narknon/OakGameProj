#include "GbxNavStuckState.h"

FGbxNavStuckState::FGbxNavStuckState() {
    this->World = NULL;
    this->NavComp = NULL;
    this->PathingActor = NULL;
    this->GbxMoveComp = NULL;
    this->StuckDistance = 0.00f;
    this->StuckVelocity = 0.00f;
    this->StuckWaitTime = 0.00f;
    this->bStuckFixEnabled = false;
    this->StuckFixStartTime = 0.00f;
    this->StuckFixStopTime = 0.00f;
}

