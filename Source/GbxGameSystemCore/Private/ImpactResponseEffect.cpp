#include "ImpactResponseEffect.h"

FImpactResponseEffect::FImpactResponseEffect() {
    this->bHighPriority = false;
    this->bCensorThisEffect = false;
    this->CensoredEffectAlternative = NULL;
    this->bOverrideImpactWwiseEvent = false;
    this->ImpactWwiseEvent = NULL;
    this->ParticleTemplate = NULL;
    this->bAttachParticleToHitActor = false;
    this->bAttachParticleToHitBone = false;
    this->bHideEffectFromHitActor = false;
    this->bNoOverlapDecal = false;
    this->DecalWidth = 0.00f;
    this->DecalHeight = 0.00f;
    this->DecalThickness = 0.00f;
    this->DecalMinScale = 0.00f;
    this->DecalMaxScale = 0.00f;
    this->bDecalRandomRotation = false;
    this->DecalRandomRotationLimit = 0.00f;
    this->DecalLifetime = 0.00f;
    this->DecalFadeDuration = 0.00f;
    this->bPlayFeedbackOnHitActor = false;
    this->HitFeedback = NULL;
    this->AreaFeedback = NULL;
}

