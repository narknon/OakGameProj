#include "WalkingProjectileMovementComponent.h"

UWalkingProjectileMovementComponent::UWalkingProjectileMovementComponent() {
    this->bGravityAffectsSlopeWalking = true;
    this->MaxWalkAngle = 45.00f;
    this->bFallOffLedges = false;
    this->MaxStepUpHeight = 0.00f;
    this->MovementFrozenMaxTime = 0.00f;
    this->bBounceOffWalls = true;
    this->MaxWallBounces = 0;
    this->WallBounciness = 0.60f;
    this->bOverrideWalkingSpeed = false;
    this->WalkingSpeedOverride = 0.00f;
}

