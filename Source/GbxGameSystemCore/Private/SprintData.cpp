#include "SprintData.h"

USprintData::USprintData() {
    this->SprintFOVCurve = NULL;
    this->bAddModifierToBaseFOV = false;
    this->SprintFOVModifier = 1.08f;
    this->SprintFOVBlendInTime = 2.00f;
    this->SprintFOVBlendOutTime = 0.50f;
    this->SprintFOVBlendInDelay = 0.00f;
    this->Feedback = NULL;
}

