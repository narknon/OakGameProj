#include "ExplosionData.h"
#include "Templates/SubclassOf.h"

class UDamageType;

FExplosionSizeProperties UExplosionData::SelectExplosion(float Size, TSubclassOf<UDamageType> DamageType) {
    return FExplosionSizeProperties{};
}

UExplosionData::UExplosionData() {
    this->DefaultExplosionSizeData = NULL;
    this->bUseRadialBlurOverride = false;
    this->TinnitusDuration = EExplosionTinnitusDuration::None;
    this->bUseBasicExplosion = false;
    this->bCensorThisExplosion = false;
    this->FeedbackOverride = NULL;
    this->ParticleSystemOverride = NULL;
    this->CensoredParticleSystemOverride = NULL;
    this->AudioEventOverride = NULL;
    this->ImpactOverride = NULL;
    this->FeedbackFalloffMinDistanceScalar = 0.00f;
    this->FeedbackFalloffMaxDistanceScalar = 0.00f;
}

