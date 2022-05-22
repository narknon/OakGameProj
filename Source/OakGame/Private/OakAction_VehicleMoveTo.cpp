#include "OakAction_VehicleMoveTo.h"

UOakAction_VehicleMoveTo::UOakAction_VehicleMoveTo() {
    this->ReachRadius = 200.00f;
    this->WantedSpeed = -1.00f;
    this->bMaxSpeed = false;
    this->bUseBoost = false;
    this->Duration = 2.00f;
    this->DotDestination = -0.30f;
}

