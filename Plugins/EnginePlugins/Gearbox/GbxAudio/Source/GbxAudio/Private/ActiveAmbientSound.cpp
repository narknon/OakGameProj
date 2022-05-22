#include "ActiveAmbientSound.h"
#include "ActiveAmbientSoundComponent.h"

void AActiveAmbientSound::EnableSounds() {
}

void AActiveAmbientSound::DisableSounds() {
}

AActiveAmbientSound::AActiveAmbientSound() {
    this->TargetInstances = 0;
    this->ActiveAmbientSound = CreateDefaultSubobject<UActiveAmbientSoundComponent>(TEXT("ActiveAmbientSound"));
}

