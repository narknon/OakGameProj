#include "GbxNavComponent.h"

class UHavokPathFindingData;

void UGbxNavComponent::TryMoving(float fDuration) {
}

void UGbxNavComponent::SetPathFindingData(UHavokPathFindingData* NewPathFindingData) {
}

void UGbxNavComponent::ResetPathFindingData() {
}

UHavokPathFindingData* UGbxNavComponent::GetPathFindingData() const {
    return NULL;
}

UGbxNavComponent::UGbxNavComponent() {
    this->GbxNavWorld = NULL;
    this->OverrideMovementData = NULL;
    this->OverridePathFindingData = NULL;
    this->MyCapsule = NULL;
    this->MyAIController = NULL;
    this->MyMovement = NULL;
}

