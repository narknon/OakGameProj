#include "FaceFXCharacter.h"
#include "FaceFXAudioComponent.h"

UFaceFXCharacter::UFaceFXCharacter() {
    this->FaceFXActor = NULL;
    this->AudioComponent = CreateDefaultSubobject<UFaceFXAudioComponent>(TEXT("FaceFXAudioComponent"));
    this->CurrentAnim = NULL;
    this->CurrentAnimSet = NULL;
}

