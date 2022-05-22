#include "OakControlledMove_PhaseLock.h"

FVector UOakControlledMove_PhaseLock::GetSuperSkunkworksReplicationData() const {
    return FVector{};
}

UOakControlledMove_PhaseLock::UOakControlledMove_PhaseLock() {
    this->BobStartDelay = 1.30f;
    this->LiftBobFrequency = 0.50f;
    this->LiftBobAmplitude = 30.00f;
    this->LiftLocationCollisionEnableTolerance = 20.00f;
    this->FXSocketName = TEXT("Root");
    this->bRegisterWithActionAbility = false;
    this->OwnerActionAbilityClass = NULL;
    this->bBlocksActionAbilityShutdown = false;
    this->OwnerActionAbility = NULL;
    this->TargetParticleScale = 0.00f;
}

