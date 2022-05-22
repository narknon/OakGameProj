#include "WwiseListenerEffectComponent.h"

class UWwiseAuxBus;

void UWwiseListenerEffectComponent::RemoveAudioEffect(UWwiseAuxBus* Efx) {
}

void UWwiseListenerEffectComponent::RemoveAllAudioEffects() {
}

void UWwiseListenerEffectComponent::ApplyAudioEffect(UWwiseAuxBus* Efx, float WetPercent, float DryPercent) {
}

UWwiseListenerEffectComponent::UWwiseListenerEffectComponent() {
    this->bRegisteredWithAudioDevice = false;
}

