#include "OakCharacter_CameraMan.h"

AOakCharacter_CameraMan::AOakCharacter_CameraMan() {
    this->BaseTurnRateMultiplier = 0.00f;
    this->BaseLookUpRateMultiplier = 0.00f;
    this->BaseRollRateMultiplier = 0.00f;
    this->MoveRateMultiplier = 0.00f;
    this->DetachedMoveRateMultiplier = 0.00f;
    this->CraneRateMultiplier = 0.00f;
    this->DegreesToMoveMultiplier = 0.00f;
    this->bAddDefaultMovementBindings = true;
    this->MovementComponent = NULL;
    this->AttachedRadius = 0.00f;
}

