#include "OakUseComponent.h"

bool UOakUseComponent::CanRouteInputToCurrentUsable(EUsabilityType Type) const {
    return false;
}

UOakUseComponent::UOakUseComponent() {
    this->PickupInteractionDistance = 250.00f;
    this->TouchPickupInteractDistance = 400.00f;
    this->VehicleTouchPickupInteractDistance = 600.00f;
    this->CurrentlySelectedPickup = NULL;
}

