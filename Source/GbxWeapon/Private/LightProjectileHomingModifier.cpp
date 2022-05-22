#include "LightProjectileHomingModifier.h"

ULightProjectileHomingModifier::ULightProjectileHomingModifier() {
    this->StartApproachDistance = 0.00f;
    this->FinalApproachDistance = 0.00f;
    this->ApproachTurnRateScale = 1.00f;
    this->bBreakHomingWhenPassingTargetDuringFinalApproach = true;
    this->EaseInTime = 0.00f;
    this->StopHomingDistance = 0.00f;
}

