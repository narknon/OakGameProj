#include "SingularityInitializationBase.h"

FSingularityInitializationBase::FSingularityInitializationBase() {
    this->PullTag = NULL;
    this->MinPullRadius = 0.00f;
    this->EffectAuxBus = NULL;
    this->EffectSize = 0.00f;
    this->EffectFadeDistance = 0.00f;
    this->EffectDuration = 0.00f;
    this->FadeDistanceRtpc = NULL;
    this->AdditionalStartEvent = NULL;
    this->AdditionalStopEvent = NULL;
}

