#include "CameraBehavior_AutoFollowVehicleRotation.h"

UCameraBehavior_AutoFollowVehicleRotation::UCameraBehavior_AutoFollowVehicleRotation() {
    this->RotationRate = 5.00f;
    this->EaseInSpeed = 1.00f;
    this->bFollowInAir = false;
    this->bFollowWhileBoosting = true;
    this->MinVehicleSpeed = 10.00f;
    this->InputDelay = 1.00f;
}

