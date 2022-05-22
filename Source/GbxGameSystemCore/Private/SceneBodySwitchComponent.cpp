#include "SceneBodySwitchComponent.h"
#include "Net/UnrealNetwork.h"

class UWwiseAudioComponent;
class UWwiseEvent;
class UParticleSystemComponent;

void USceneBodySwitchComponent::OnRep_ReplicatedState() {
}

void USceneBodySwitchComponent::HandleWwiseEventFinished(UWwiseAudioComponent* WAC, UWwiseEvent* WwiseEvent) {
}

void USceneBodySwitchComponent::HandleParticleSystemFinished(UParticleSystemComponent* PSC) {
}

void USceneBodySwitchComponent::GetValidSwitchStateNames(TArray<FName>& OutNames) const {
}

void USceneBodySwitchComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USceneBodySwitchComponent, ReplicatedState);
}

USceneBodySwitchComponent::USceneBodySwitchComponent() {
    this->DetachAction = NULL;
}

