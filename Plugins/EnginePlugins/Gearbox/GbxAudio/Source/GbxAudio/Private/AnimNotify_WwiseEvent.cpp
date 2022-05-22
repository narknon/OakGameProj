#include "AnimNotify_WwiseEvent.h"

UAnimNotify_WwiseEvent::UAnimNotify_WwiseEvent() {
    this->WwiseEvent = NULL;
    this->PlaybackMethod = EWwiseNotifyComponentMethod::UseActorDefaultComponent;
    this->bAttachToOwner = false;
    this->EmitterRadius = 50.00f;
    this->bIgnorePerspective = false;
    this->AcousticsMode = EAcousticsMode::EnabledUnconditionalSampleMode;
}

