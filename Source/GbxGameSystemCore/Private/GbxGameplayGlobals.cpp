#include "GbxGameplayGlobals.h"

UGbxGameplayGlobals::UGbxGameplayGlobals() {
    this->ShieldHealthType = NULL;
    this->ProjectileReflectionQuery = NULL;
    this->ProjectileReflectionSpeedScale = 1.00f;
    this->ProjectileHitRegionRicochetSpeedScale = 0.30f;
    this->ProjectileReflectionImpact = NULL;
    this->ProjectileSelfReflectionImpact = NULL;
    this->DefaultUseDefinition = NULL;
    this->GlobalAIData = NULL;
    this->ExplosionWindRadiusModifier = 2.50f;
    this->MinExplosionRadiusToTriggerRadialBlur = 256.00f;
    this->ShortDurationTinnitusEvent = NULL;
    this->MediumDurationTinnitusEvent = NULL;
    this->LongDurationTinnitusEvent = NULL;
    this->ExplosionSoundStackingMaxDistanceSquared = 1048576.00f;
    this->ExplosionSoundStackingPreventionDelay = 0.25f;
    this->DefaultFeedbackTable = NULL;
}

