#include "SingularityGrenadeAudioEffectComponent.h"

class UObject;
class UWwiseRtpc;
class UWwiseAuxBus;
class UWwiseEvent;

void USingularityGrenadeAudioEffectComponent::StopActiveEffect() {
}

void USingularityGrenadeAudioEffectComponent::SpawnSingularityAudioEffectAtLocation(UObject* WorldContextObject, UWwiseAuxBus* EffectAuxBus, FVector EffectLocation, float Size, float FadeDistance, float Duration, UWwiseRtpc* FadeDistanceRtpc, UWwiseEvent* AdditionalStartEvent, UWwiseEvent* AdditionalStopEvent) {
}

USingularityGrenadeAudioEffectComponent::USingularityGrenadeAudioEffectComponent() {
    this->AuxBus = NULL;
    this->AudioEffect = NULL;
    this->EffectFadeRtpc = NULL;
    this->StartEvent = NULL;
    this->StopEvent = NULL;
    this->EffectSize = 0.00f;
    this->EffectFadeDistance = 0.00f;
    this->EffectDuration = 0.00f;
}

