#include "WwiseAmbientSound.h"
#include "WwiseAudioComponent.h"

void AWwiseAmbientSound::ToggleAmbientSound() {
}

void AWwiseAmbientSound::StopAmbientSound() {
}

void AWwiseAmbientSound::StartAmbientSound() {
}


AWwiseAmbientSound::AWwiseAmbientSound() {
    this->AkComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AkAudioComponent0"));
    this->WwiseEvent = NULL;
    this->bStartAutomatically = true;
    this->bOnlyEmitWhenContainingListener = false;
    this->bOrientToPlayer = false;
    this->VolumetricEmitterRadius = 50.00f;
    this->VolumetricEmitterGain = 1.00f;
    this->VolumetricAttenuationRTPC = NULL;
    this->VolumetricAttenuationMaxDistance = 1000.00f;
}

