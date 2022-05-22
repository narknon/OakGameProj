#include "ExplosionSizeProperties.h"

FExplosionSizeProperties::FExplosionSizeProperties() {
    this->ExplosionSize = 0.00f;
    this->ExplosionFeedback = NULL;
    this->ExplosionParticleSystem = NULL;
    this->CensoredExplosionParticleSystem = NULL;
    this->ExplosionAudioEvent = NULL;
    this->ExplosionImpact = NULL;
    this->bCensorThisExplosion = false;
    this->bUseExplosionRadialBlur = false;
    this->bOverrideTinnitusDuration = false;
    this->TinnitusDuration = EExplosionTinnitusDuration::None;
}

