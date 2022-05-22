#include "LightProjectileRandomDrunkenModifier.h"

ULightProjectileRandomDrunkenModifier::ULightProjectileRandomDrunkenModifier() {
    this->PathCorrectionInterval = 0.00f;
    this->TurnSpeed = 0.00f;
    this->MaxSpreadAngle = 0.00f;
    this->MaxDepartureAngle = 45.00f;
    this->bGravityAffectsDrunkenness = false;
    this->DrunkenGravityScalar = 1.00f;
    this->StartApproachDistance = 1500.00f;
    this->StartDelayTime = 0.00f;
    this->EaseInTime = 0.00f;
    this->bNormalizedEaseTime = false;
}

