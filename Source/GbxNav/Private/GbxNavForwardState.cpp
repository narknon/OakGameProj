#include "GbxNavForwardState.h"

FGbxNavForwardState::FGbxNavForwardState() {
    this->MinSpeedScale = 0.00f;
    this->bScaleSpeed = false;
    this->MaxTurnScale = 0.00f;
    this->bScaleRotation = false;
    this->ScaleInterpTime = 0.00f;
    this->WallCheckDegreesPerSegment = 0.00f;
    this->MinTurnRadius = 0.00f;
    this->World = NULL;
    this->GbxNavWorld = NULL;
    this->NavComponent = NULL;
    this->MovementComponent = NULL;
    this->VehicleFlightComponent = NULL;
}

