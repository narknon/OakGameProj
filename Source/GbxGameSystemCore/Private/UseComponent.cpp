#include "UseComponent.h"
#include "Net/UnrealNetwork.h"

class UUsableComponent;

void UUseComponent::StopUsingCurrentObject(EUsabilityType UseType) {
}

void UUseComponent::StartUsingCurrentObject(EUsabilityType UseType) {
}

void UUseComponent::ServerUseObject_Implementation(UUsableComponent* UsableObject, EUsabilityType UseType, bool bHeld) {
}
bool UUseComponent::ServerUseObject_Validate(UUsableComponent* UsableObject, EUsabilityType UseType, bool bHeld) {
    return true;
}

void UUseComponent::ServerStopUsingObject_Implementation(UUsableComponent* UsableObject, EUsabilityType UseType) {
}
bool UUseComponent::ServerStopUsingObject_Validate(UUsableComponent* UsableObject, EUsabilityType UseType) {
    return true;
}

void UUseComponent::ServerStartUsingObject_Implementation(UUsableComponent* UsableObject, EUsabilityType UseType) {
}
bool UUseComponent::ServerStartUsingObject_Validate(UUsableComponent* UsableObject, EUsabilityType UseType) {
    return true;
}

UUsableComponent* UUseComponent::GetCurrentUsable() const {
    return NULL;
}

void UUseComponent::ForceUsingObject(UUsableComponent* UsableObject) {
}

void UUseComponent::ClientNotifyAttemptedUseCouldNotAfford_Implementation(UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld) {
}

bool UUseComponent::CanUseCurrentUsable(EUsabilityType Type) const {
    return false;
}

bool UUseComponent::CanInteractWithCurrentUsable(EUsabilityType Type) const {
    return false;
}

void UUseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUseComponent, ReplicatedUsableState);
    DOREPLIFETIME(UUseComponent, ReplicatedCostCache);
    DOREPLIFETIME(UUseComponent, CanUseObjectsLock_Replicated);
}

UUseComponent::UUseComponent() {
    this->ViewDistance = 2000.00f;
    this->InteractDistance = 250.00f;
    this->LeaveInteractionDistance = 253.00f;
    this->VehicleInteractDistance = 1500.00f;
    this->VehicleLeaveInteractionDistance = 1503.00f;
    this->CachedController = NULL;
}

