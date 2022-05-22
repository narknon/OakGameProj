#include "CoordinatedParticleSystemData.h"

FCoordinatedParticleSystemData::FCoordinatedParticleSystemData() {
    this->ParticleSystem = NULL;
    this->StartTime = 0.00f;
    this->DeactivateTime = 0.00f;
    this->ScaleMode = ECoordinatedParticleScaleMode::None;
    this->bOnlyPlayerOwnerCanSee = false;
    this->bForegroundLayer = false;
    this->bInheritViewFlags = false;
    this->bPermanent = false;
}

