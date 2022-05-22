#include "ParticleModuleGbxAudioPool.h"

UParticleModuleGbxAudioPool::UParticleModuleGbxAudioPool() {
    this->AudioEvent = NULL;
    this->MaxNumberOfAudioComponents = 4;
    this->bStealComponents = false;
    this->AudioComponentRadius = 50.00f;
}

