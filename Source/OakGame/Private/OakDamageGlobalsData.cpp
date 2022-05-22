#include "OakDamageGlobalsData.h"

UOakDamageGlobalsData::UOakDamageGlobalsData() {
    this->CrushDamageSource = NULL;
    this->SkillDamageSourceInstigatorMultiplier = NULL;
    this->NumPlayersBalanceInfo.AddDefaulted(4);
    this->ImpactElementalDamageTypes[0] = NULL;
    this->ImpactElementalDamageTypes[1] = NULL;
    this->ImpactElementalDamageTypes[2] = NULL;
    this->ImpactElementalDamageTypes[3] = NULL;
    this->ImpactElementalDamageTypes[4] = NULL;
    this->ImpactElementalDamageTypes[5] = NULL;
    this->RadiationDamageScalePercent = 0.25f;
    this->DamageReceivedSound = NULL;
    this->DamageReceivedShieldSound = NULL;
    this->DamageReceivedCriticalSound = NULL;
    this->DamageDealtSound = NULL;
    this->DamageDealtCriticalSound = NULL;
    this->DamageDealtImmuneSound = NULL;
    this->DamageDealtShieldSound = NULL;
    this->HeartbeatWwiseEvent = NULL;
    this->HeartbeatIntervalInSecondsRtpc = NULL;
    this->HeartbeatDelayInSecondsRtpc = NULL;
    this->HeartbeatVolumeRtpc = NULL;
    this->LowHealthHeartBPM = 0.00f;
    this->VeryLowHealthBPM = 0.00f;
    this->VeryLowHealthTransitionValue = 0.00f;
    this->HealthPercentRtpc = NULL;
    this->HealthPercentRtpcTransitionDuration = 0.00f;
    this->ResistDamageReductionFeedbackThreshold = 0.50f;
    this->MinTimeBetweenResistFeedbacks = 0.60f;
    this->DamageDealtFlashDuration = 0.10f;
    this->DamageDealtFlashParamName = TEXT("DamageFlash");
    this->DamageDealtFlashColorParamName = TEXT("DamageFlashColor");
    this->LowHealthEffectBlendSpeed = 1.00f;
    this->LowHealthEffectCurve = NULL;
    this->LowHealthParticle = NULL;
    this->RevivePercentToLowHealthEffectCurve = NULL;
    this->RevivePercentToCreepingDeathEffectCurve = NULL;
    this->CreepingDeathSecondWindBlendSpeed = 2.00f;
    this->CreepingDeathSecondWindBlendCurve = NULL;
    this->CreepingDeathRevivingBlendSpeed = 1.00f;
    this->CreepingDeathRevivingBlendCurve = NULL;
    this->CreepingDeathParticle = NULL;
    this->ShieldHitDuration = 1.00f;
    this->MinTimeBetweenShieldHits = 0.65f;
    this->ShieldHitCurve = NULL;
    this->ShieldBreakDuration = 1.50f;
    this->ShieldBreakAmountCurve = NULL;
    this->ShieldBreakIntensityCurve = NULL;
    this->ElementalInteractionDamageSource = NULL;
    this->RecentGoreDamageTime = 0.50f;
    this->IncomingDamagePresentationQueueDuration = 1.00f;
    this->NumProjectilesForQuickPop = 20;
}

