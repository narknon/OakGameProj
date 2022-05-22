#include "IncomingDamageDisplayInfo.h"

FIncomingDamageDisplayInfo::FIncomingDamageDisplayInfo() {
    this->HealthDamageIndicatorStaticMesh = NULL;
    this->ShieldDamageIndicatorStaticMesh = NULL;
    this->ArmorDamageIndicatorStaticMesh = NULL;
    this->DamageIndicatorScale = 0.00f;
    this->MinForegroundFOVToDrawIndicators = 0.00f;
    this->DamageIndicatorDuration = 0.00f;
    this->DamageIndicatorFadeDuration = 0.00f;
    this->MaxDamageIndicators = 0;
    this->DamageIndicatorSphereRelativePitch = 0.00f;
    this->MaxPitchToApplyYawRemapping = 0.00f;
    this->MeleeJoltRange = 0.00f;
    this->AttackerLocationCrouchTransitionDuration = 0.00f;
}

