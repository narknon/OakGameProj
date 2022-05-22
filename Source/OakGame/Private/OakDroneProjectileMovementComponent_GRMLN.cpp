#include "OakDroneProjectileMovementComponent_GRMLN.h"

UOakDroneProjectileMovementComponent_GRMLN::UOakDroneProjectileMovementComponent_GRMLN() {
    this->BoostVelocitySquared = 500.00f;
    this->HardpointActivationRadius = 500.00f;
    this->HardpointDeactivationRadius = 1000.00f;
    this->GRMLNOwner = NULL;
}

