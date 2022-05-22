#include "CameraBehavior_BlendToFOV.h"

UCameraBehavior_BlendToFOV::UCameraBehavior_BlendToFOV() {
    this->FOVCurve = NULL;
    this->bAddModifierToBaseFOV = false;
    this->FOVModifier = 1.00f;
    this->MaxFOV = 0.00f;
    this->BlendInTime = 0.50f;
    this->BlendOutTime = 0.50f;
    this->BlendInDelay = 0.00f;
    this->BlendInCondition = NULL;
    this->bBlendOutWhenBlendInFails = true;
    this->BlendOutCondition = NULL;
    this->CurrentDelay = 0.00f;
    this->MaxFOVModifier = 1.00f;
    this->BlendPct = 0.00f;
    this->bTransitioningToTargetFoV = false;
}

