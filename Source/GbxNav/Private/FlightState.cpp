#include "FlightState.h"

FFlightState::FFlightState() {
    this->CurrentMovementState = Approach;
    this->VehicleSplineActor = NULL;
    this->DropOffSpawner = NULL;
    this->AscentTargetLocationZ = 0.00f;
}

