#include "VehicleAudioEffect.h"

UVehicleAudioEffect::UVehicleAudioEffect() {
    this->bPlayAudioAtLocation = false;
    this->StartAudioEvent = NULL;
    this->StopAudioEvent = NULL;
    this->AudioEmitterRadius = 50.00f;
}

