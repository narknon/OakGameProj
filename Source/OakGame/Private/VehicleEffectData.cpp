#include "VehicleEffectData.h"

FVehicleEffectData::FVehicleEffectData() {
    this->ParticleEffect = NULL;
    this->bPlayerOnly = false;
    this->bAutoActivate = false;
    this->bPlayAudioAtLocation = false;
    this->RelativeScale = 0.00f;
    this->StartAudioEvent = NULL;
    this->StopAudioEvent = NULL;
    this->AudioEmitterRadius = 0.00f;
}

