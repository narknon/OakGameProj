#include "AnimNotifyState_LoopingSound.h"

UAnimNotifyState_LoopingSound::UAnimNotifyState_LoopingSound() {
    this->StartEvent = NULL;
    this->StopEvent = NULL;
    this->PlaybackMethod = EWwiseNotifyComponentMethod::UseActorDefaultComponent;
    this->bAttachToOwner = false;
    this->EmitterRadius = 0.00f;
}

