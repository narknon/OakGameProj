#include "HavokUserEdgeComponent.h"

class AActor;

void UHavokUserEdgeComponent::SetEdgeEnabled(bool bNewEnabled) {
}

bool UHavokUserEdgeComponent::IsEdgeEnabled() const {
    return false;
}

void UHavokUserEdgeComponent::AnchorDestroyed(AActor* Actor) {
}

UHavokUserEdgeComponent::UHavokUserEdgeComponent() {
    this->bEnabled = true;
    this->EdgeBeginWidth = 64.00f;
    this->EdgeEndWidth = 64.00f;
    this->Direction = EGbxUserEdgeDirection::Bidirectional;
    this->GbxUserEdge = NULL;
    this->TeleportRadius = 2000.00f;
    this->bAnchorEnd = false;
    this->EndAnchorBase = NULL;
    this->RegisteredEndAnchorRoot = NULL;
    this->EdgeID = 4294967295;
    this->UserEdge = NULL;
}

