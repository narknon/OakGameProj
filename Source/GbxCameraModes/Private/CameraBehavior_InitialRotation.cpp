#include "CameraBehavior_InitialRotation.h"

UCameraBehavior_InitialRotation::UCameraBehavior_InitialRotation() {
    this->bControlPitch = false;
    this->bControlYaw = false;
    this->bInterruptedByInput = false;
    this->bDisableInput = false;
    this->InitialCondition = NULL;
}

