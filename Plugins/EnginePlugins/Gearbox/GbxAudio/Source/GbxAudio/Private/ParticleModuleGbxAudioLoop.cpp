#include "ParticleModuleGbxAudioLoop.h"

UParticleModuleGbxAudioLoop::UParticleModuleGbxAudioLoop() {
    this->LoopStartEvent = NULL;
    this->LoopStopEvent = NULL;
    this->MultiPositionType = EWwiseMultiPositionType::MultiDirections;
    this->AudioComponentRadius = 50.00f;
}

