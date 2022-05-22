#include "ExplosionComponent.h"

void UExplosionComponent::SetExplosionLocation(const FVector& NewLocation) {
}

void UExplosionComponent::Explode_Implementation(const FDamageInfo& DamageInfo) {
}

UExplosionComponent::UExplosionComponent() {
    this->ExplosionParticleSystem = NULL;
    this->ExplosionEffectCollection = NULL;
    this->ParticleSystemSize = 0.00f;
    this->bModifyParticleSystemSize = false;
    this->ExplosionAudioEvent = NULL;
    this->Feedback = NULL;
    this->MaxFeedbackRangeScalar = 0.00f;
    this->bCauseExplosionDamage = false;
    this->bOverrideLocation = false;
}

