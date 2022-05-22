#include "GbxTrajectometerComponent.h"

void UGbxTrajectometerComponent::UpdateCollisionShape() {
}

void UGbxTrajectometerComponent::SetTrajectometerEnabled(bool bEnabled) {
}

UGbxTrajectometerComponent::UGbxTrajectometerComponent() {
    this->SimulatorProjectile = NULL;
    this->TrailParticle = NULL;
    this->ProjectileUpdatedComp = NULL;
    this->bEnableOnStart = true;
    this->SimulationStepTime = 0.05f;
    this->SimulationMaxTime = 0.50f;
    this->SimulatorTemplate = NULL;
    this->ProjectileToSimulate = NULL;
    this->TrailEmitterTemplate = NULL;
    this->bStartFromWeapon = true;
    this->bStartFromViewLocation = false;
    this->bUseSocketAsStartRotation = false;
    this->bSimulateWeaponProjectile = false;
    this->bUseProjectileForCollision = true;
    this->bConvergeTowardsAimLocation = false;
}

