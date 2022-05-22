#include "GbxDestructibleComponent.h"

void UGbxDestructibleComponent::SetFracturable(bool bFracturable) {
}

float UGbxDestructibleComponent::GetTotalPercentFractured() const {
    return 0.0f;
}

float UGbxDestructibleComponent::GetDamageRequiredToFracture(int32 Depth) {
    return 0.0f;
}

void UGbxDestructibleComponent::FractureRandomChunk() {
}

UGbxDestructibleComponent::UGbxDestructibleComponent() {
    this->SecondsToWaitAfterNotRenderedToCleanUp = 5.00f;
    this->ProbabilityOfTransientChunk = 0.00f;
    this->FractureEventRefireDelay = 1.00f;
    this->DestructibleRelevance = EDestructibleRelevance::DR_GameplayAndNetwork;
    this->ChunkCollisionChannel = ECC_Destructible;
    this->ChunkImpactData = NULL;
    this->bPlayFractureEventOnDebris = false;
    this->bSupportChunksBlockPawnMovement = true;
    this->bOverrideAssetDamageThreshold = false;
    this->MetersDroppedToBreak = 0.00f;
    this->DamageThresholdMagnitude = EDestructibleDamageThresholdMagnitude::Low;
    this->ImpactDamageDefaultDepth = 1;
    this->bAutoComputeMaterialStrength = false;
    this->bAccumulateImpactDamage = false;
    this->ImpactVelocityThresholdOverride = 0.00f;
    this->bUseTotalMass = false;
    this->TotalMass = 100.00f;
    this->bOverrideDebrisLifetime = false;
    this->DebrisLifetimeMin = 0.00f;
    this->DebrisLifetimeMax = 0.00f;
    this->FractureEffectOverlapPercent = 0.80f;
}

