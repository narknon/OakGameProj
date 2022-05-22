#include "GbxNavCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UGbxNavCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxNavCharacterMovementComponent, PathingData);
}

UGbxNavCharacterMovementComponent::UGbxNavCharacterMovementComponent() {
    this->NavClientPopDistance = 250.00f;
    this->bOverrideSlowdownNearGoal = false;
    this->GbxNavWorld = NULL;
    this->GbxNavComponent = NULL;
    this->ForcedNavMeshLayer = NULL;
    this->bOverrideMaxAcceleration = false;
    this->StanceMaxAcceleration = 2048.00f;
}

