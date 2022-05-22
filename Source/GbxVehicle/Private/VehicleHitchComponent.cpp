#include "VehicleHitchComponent.h"

class AActor;
class UVehicleHitchAttachPtComponent;

void UVehicleHitchComponent::TeleportTrailerAndAttachToHitch(AActor* TrailerToAttach) {
}

void UVehicleHitchComponent::DetachFromHitch() {
}

void UVehicleHitchComponent::AttachToHitch(UVehicleHitchAttachPtComponent* AttachPtToAttach) {
}

UVehicleHitchComponent::UVehicleHitchComponent() {
    this->bCheckAutoAttach = false;
    this->HitchAttachCheckRadius = 50.00f;
    this->YawLimit = 55.00f;
    this->PitchLimit = 25.00f;
    this->HitchConstraintStiffness = 30.00f;
    this->HitchConstraintDamping = 1.00f;
    this->AttachedPoint = NULL;
    this->OwningVehicle = NULL;
    this->OwningVehicleMovementComp = NULL;
}

