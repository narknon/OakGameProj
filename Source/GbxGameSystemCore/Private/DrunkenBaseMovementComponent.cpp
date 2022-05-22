#include "DrunkenBaseMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UDrunkenBaseMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDrunkenBaseMovementComponent, RandomNumberSeed);
}

UDrunkenBaseMovementComponent::UDrunkenBaseMovementComponent() {
    this->StartApproachDistance = 1500.00f;
    this->StartDelayTime = 0.00f;
    this->EaseInTime = 0.00f;
    this->RandomNumberSeed = 0;
}

