#include "CameraBehavior_VehicleTransitionOut.h"

UCameraBehavior_VehicleTransitionOut::UCameraBehavior_VehicleTransitionOut() {
    this->RotateSpeed = 1.00f;
    this->LookAtFactor = 10.00f;
    this->PitchMin = -80.00f;
    this->PitchMax = 80.00f;
    this->LookAtSocket = TEXT("Camera_3rd");
    this->NoAnimationDuration = 2.70f;
    this->ActionComp = NULL;
}

