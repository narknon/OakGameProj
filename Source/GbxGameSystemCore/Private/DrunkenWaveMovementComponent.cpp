#include "DrunkenWaveMovementComponent.h"

UDrunkenWaveMovementComponent::UDrunkenWaveMovementComponent() {
    this->GlobalWaveformScale = 1.00f;
    this->MaxRandomWaveOffsetTime = 0.00f;
    this->bGravityAffectsDrunkenness = false;
    this->DrunkenGravityScalar = 0.00f;
}

