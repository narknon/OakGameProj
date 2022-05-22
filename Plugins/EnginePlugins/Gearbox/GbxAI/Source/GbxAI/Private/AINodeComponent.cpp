#include "AINodeComponent.h"

class AActor;

AActor* UAINodeComponent::SelectNextNode() const {
    return NULL;
}

bool UAINodeComponent::HasLinkTo(AActor* Node) const {
    return false;
}

bool UAINodeComponent::HasLinkFrom(AActor* Node) const {
    return false;
}

bool UAINodeComponent::HasArrived(FVector Point, float Error) const {
    return false;
}

int32 UAINodeComponent::GetLinkedNodeNum() const {
    return 0;
}

AActor* UAINodeComponent::GetLinkedNode(int32 I) const {
    return NULL;
}

void UAINodeComponent::CreateLinkTo(AActor* Node, float Weight) {
}

bool UAINodeComponent::BreakLinkTo(AActor* Node) {
    return false;
}

UAINodeComponent::UAINodeComponent() {
    this->bEnabled = true;
    this->bUseRouteSystem = false;
    this->RouteFindNavHeight = 1000.00f;
    this->bDrawRouteFindNavHeight = false;
    this->ArrivalThreshold = 100.00f;
    this->ArrivalHeightThreshold = 100.00f;
    this->bSnapToGround = true;
    this->MaxSnapDistance = 200.00f;
    this->bLinkOnAltDrag = true;
    this->bVisualizeWhileUnlinked = true;
    this->bRouteSelected = false;
    this->bSelected = false;
}

