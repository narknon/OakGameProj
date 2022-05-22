#include "DamageData.h"





UDamageData::UDamageData() {
    this->DamageAreaType = NULL;
    this->DamageSource = NULL;
    this->DamageType = NULL;
    this->bApplyUpwardForce = false;
    this->UpwardForceScalar = 1.00f;
    this->GoreModifier = 1.00f;
    this->GibModifier = 1.00f;
    this->bImpactForceFallsOff = false;
    this->bSimulatedOnClients = true;
    this->bForceNoCrit = false;
    this->bCanBeExecutedAsync = true;
    this->MaxAsyncExecutionDeferTime = 0.20f;
    this->bBaseTransformComesFromActorTransform = false;
    this->bEnforceAttitudeRulesForHealing = false;
    this->bCanHurtSelf = false;
    this->bCanHurtInstigator = false;
    this->bCausesDamageOverTime = false;
    this->bAllowMultipleInstances = false;
    this->bHitEachTargetOnlyOnce = true;
    this->bCacheSourceLocationAndRotation = false;
    this->MaxDamageDuration = 5.00f;
    this->DamageInterval = 0.10f;
    this->bCancelDamageOverTimeWhenOwnerDies = true;
    this->DamageOverTimeParticleSystem = NULL;
    this->DamageOverTimeAudioEventStart = NULL;
    this->DamageOverTimeAudioEventStop = NULL;
    this->InstigatorFeedback = NULL;
    this->ImpactData = NULL;
    this->ExplosionData = NULL;
    this->DefaultExplosionParticles = NULL;
    this->DefaultAudioEvent = NULL;
    this->DefaultExplosionImpactData = NULL;
    this->DefaultExplosionDecalOverride = NULL;
    this->bUseExplosionSizeForDecal = false;
    this->bOnlyDrawParticleIfFacingDamage = false;
    this->PlayerAudioEvent = NULL;
}

