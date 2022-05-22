#include "ControlledMoveState.h"

FControlledMoveState::FControlledMoveState() {
    this->MovementComponentOwner = NULL;
    this->CurrentMove = NULL;
    this->Instigator = NULL;
    this->BaseSpeed = 0.00f;
    this->Speed = 0.00f;
    this->Runtime = 0.00f;
    this->TargetActor = NULL;
    this->LastHitActor = NULL;
    this->aForwardInput = 0.00f;
    this->aStrafeInput = 0.00f;
}

