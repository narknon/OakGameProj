#include "SlidingImpactState.h"

FSlidingImpactState::FSlidingImpactState() {
    this->OwnerMovementComponent = NULL;
    this->StartAudioEvent = NULL;
    this->StopAudioEvent = NULL;
    this->bIgnoreSlidingState = false;
    this->LastImpactTraceTime = 0.00f;
}

