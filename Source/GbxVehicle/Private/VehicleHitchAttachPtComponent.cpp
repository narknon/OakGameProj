#include "VehicleHitchAttachPtComponent.h"

bool UVehicleHitchAttachPtComponent::IsAttached() const {
    return false;
}

UVehicleHitchAttachPtComponent::UVehicleHitchAttachPtComponent() {
    this->UpdatedPrimitive = NULL;
    this->AttachTransitionLength = 0.50f;
    this->AttachTransitionTolerance = 20.00f;
    this->BrakeTorque = 1500.00f;
    this->CachedAttachedVehicleMovementComp = NULL;
    this->CachedMovementComponent = NULL;
}

