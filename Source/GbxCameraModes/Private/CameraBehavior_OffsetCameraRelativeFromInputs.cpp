#include "CameraBehavior_OffsetCameraRelativeFromInputs.h"

UCameraBehavior_OffsetCameraRelativeFromInputs::UCameraBehavior_OffsetCameraRelativeFromInputs() {
    this->bHackForDayOnePatch = true;
    this->LimitPitch = 80.00f;
    this->CollisionRadius = 30.00f;
    this->MoveSpeed = 100.00f;
}

