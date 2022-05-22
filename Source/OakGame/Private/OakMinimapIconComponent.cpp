#include "OakMinimapIconComponent.h"
#include "Net/UnrealNetwork.h"

void UOakMinimapIconComponent::UpdateTracking() {
}

void UOakMinimapIconComponent::SetupTargetting() {
}

void UOakMinimapIconComponent::SetTracking(bool bInTracking) {
}

void UOakMinimapIconComponent::OnRep_IsTracking() {
}

void UOakMinimapIconComponent::OnRep_InstancedPlayerOwnerInfo() {
}

void UOakMinimapIconComponent::OnCharacterDied() {
}

void UOakMinimapIconComponent::DelayedUpdateIsTracking() {
}

void UOakMinimapIconComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakMinimapIconComponent, InstancedPlayerOwnerInfo);
    DOREPLIFETIME(UOakMinimapIconComponent, bIsTracking);
}

UOakMinimapIconComponent::UOakMinimapIconComponent() {
    this->MinimapComponentType = EOakMinimapIconComponentType::Manual;
    this->bBeginTrackinOnPlay = true;
    this->bIsTracking = false;
    this->bIsTrackingInternal = false;
    this->bIsInControl = false;
}

