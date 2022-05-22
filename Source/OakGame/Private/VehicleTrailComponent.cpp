#include "VehicleTrailComponent.h"

UVehicleTrailComponent::UVehicleTrailComponent() {
    this->TrailTickGroup = TG_PostPhysics;
    this->TrailTranslucentSortPriority = -1;
    this->MinSpeedForTrail = 5.00f;
    this->TrailUpOffset = 2.00f;
    this->FrameIndex = 0.00f;
    this->MinRPMForFastSpin = 20.00f;
    this->MaxSpeedForFastSpin = 5.00f;
    this->MinSpeedToActivateBigCore = 2000.00f;
    this->MinRPMToActivateBigCore = 50.00f;
    this->ParticleDriftVelocity = 50.00f;
    this->bHasUpgrade01 = false;
    this->bHasUpgrade02 = false;
    this->WheelMoveComp = NULL;
}

