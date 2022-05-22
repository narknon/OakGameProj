#include "WwiseListenerComponent.h"

class UWwiseRtpc;
class AActor;
class UWwiseEvent;
class UWwiseListenerComponent;

void UWwiseListenerComponent::SetBusRTPCValue(UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve) {
}

UWwiseListenerComponent* UWwiseListenerComponent::FindAssociatedListener(AActor* TargetActor) {
    return NULL;
}

void UWwiseListenerComponent::ConfigureListener(UWwiseEvent* WwiseEvent) {
}

UWwiseListenerComponent::UWwiseListenerComponent() {
}

