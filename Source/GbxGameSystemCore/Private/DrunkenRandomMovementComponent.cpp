#include "DrunkenRandomMovementComponent.h"

UDrunkenRandomMovementComponent::UDrunkenRandomMovementComponent() {
    this->PathCorrectionInterval = 0.00f;
    this->TurnSpeed = 0.00f;
    this->MaxSpreadAngle = 0.00f;
    this->MaxDepartureAngle = 45.00f;
    this->bGravityAffectsDrunkenness = false;
    this->DrunkenGravityScalar = 1.00f;
    this->bFixDrunkenMovementAcceleration = false;
}

