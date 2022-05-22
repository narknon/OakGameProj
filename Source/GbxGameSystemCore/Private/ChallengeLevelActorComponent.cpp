#include "ChallengeLevelActorComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UChallengeLevelActorComponent::SetIsStationary(bool bInIsStationary) {
}

void UChallengeLevelActorComponent::SetInWorldIconEnabled(bool bEnable) {
}

void UChallengeLevelActorComponent::OnRep_IsStationary(bool bOldIsStationary) {
}

void UChallengeLevelActorComponent::OnRep_InWorldIconEnabled(bool bOldEnabled) {
}

void UChallengeLevelActorComponent::OnRep_ChallengeReference() {
}

void UChallengeLevelActorComponent::HandleAttachmentChanged() {
}

AActor* UChallengeLevelActorComponent::GetAssociatedActor() {
    return NULL;
}

void UChallengeLevelActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChallengeLevelActorComponent, ChallengeReference);
    DOREPLIFETIME(UChallengeLevelActorComponent, bInWorldIconEnabled);
    DOREPLIFETIME(UChallengeLevelActorComponent, bIsStationary);
}

UChallengeLevelActorComponent::UChallengeLevelActorComponent() {
    this->BaseChallengeReference = NULL;
    this->ChallengeReference = NULL;
    this->bShowInZoneMap = true;
    this->bShowInMiniMap = true;
    this->bShowInWorld = true;
    this->bInWorldIconEnabled = true;
    this->UnfogRadiusWhenChallengeActive = 0.00f;
    this->UnfogHeightWhenChallengeActive = 0.00f;
    this->bIsStationary = true;
    this->OwningLevelActorComponent = NULL;
}

