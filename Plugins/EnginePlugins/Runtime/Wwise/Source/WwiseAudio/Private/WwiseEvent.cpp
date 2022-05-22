#include "WwiseEvent.h"

float UWwiseEvent::GetMaxDuration() const {
    return 0.0f;
}

UWwiseEvent::UWwiseEvent() {
    this->RequiredBank = NULL;
    this->MaxAttenuationRadius = 0.00f;
    this->bEcho = false;
    this->bOneShot = false;
    this->bSimple = false;
    this->bHighImportance = false;
    this->bLocalizedVoice = false;
    this->bUsesSpeedParameter = false;
    this->bUsesApproachSpeedParameter = false;
    this->bUsesRotationalSpeedParameter = false;
    this->bUsesComponentRelativeSpeedParameter = false;
    this->bUsesPhysicalMaterialSwitch = false;
    this->bSupportsLiveVoice = false;
    this->bSupportsEchoVoice = false;
    this->bEchoWasForcedOff = true;
    this->bUsesPerspectiveParameter = false;
    this->PrepareEventRefCount = 0;
    this->bPrepareEventDidLoadAllGameSyncs = false;
}

