#include "LightAudioComponent.h"

class UWwiseRtpc;
class UWwiseEvent;

void ULightAudioComponent::SetRTPCValue(UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve) {
}

FWwisePlaybackInstance ULightAudioComponent::PostWwiseEvent(UWwiseEvent* WwiseEvent) {
    return FWwisePlaybackInstance{};
}

ULightAudioComponent::ULightAudioComponent() {
    this->bDynamicPosition = false;
    this->SubscribedToManager = NULL;
}

