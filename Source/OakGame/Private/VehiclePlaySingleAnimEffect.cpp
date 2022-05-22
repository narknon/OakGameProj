#include "VehiclePlaySingleAnimEffect.h"

UVehiclePlaySingleAnimEffect::UVehiclePlaySingleAnimEffect() {
    this->PlayMode = EVehiclePlaySingleAnimMode::PlayOnStart;
    this->AnimationAsset = NULL;
    this->bLoop = false;
    this->bPlaying = true;
    this->bUseCurrentAnimPosition = false;
    this->Position = 0.00f;
    this->PlayRate = 1.00f;
}

