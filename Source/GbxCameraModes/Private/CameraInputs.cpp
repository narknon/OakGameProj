#include "CameraInputs.h"

UCameraInputs::UCameraInputs() {
    this->CurrentTime = 0.00f;
    this->AdditionalRoll = 0.00f;
    this->DefaultFOV = 70.00f;
    this->DefaultForegroundFOV = 0.00f;
    this->ViewTarget = NULL;
    this->Controller = NULL;
    this->AttachComponent = NULL;
}

