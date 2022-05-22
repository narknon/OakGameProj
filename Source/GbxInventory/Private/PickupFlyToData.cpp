#include "PickupFlyToData.h"

UPickupFlyToData::UPickupFlyToData() {
    this->MaxLifetime = 1.00f;
    this->TargetThreshold = 70.00f;
    this->bEnableSpinSpeedRange = false;
    this->bEnableLinearSpeedRange = false;
    this->bEnableTargetRotationSpeedRange = false;
    this->LinearSpeed = 1000.00f;
    this->MaxLinearSpeed = 0.00f;
    this->LinearAcceleration = 0.00f;
    this->TerminalLinearSpeed = 1500.00f;
    this->TargetRotationSpeed = 10.00f;
    this->MaxTargetRotationSpeed = 0.00f;
    this->TargetScaleByDistanceCurve = NULL;
    this->TargetScaleByDistanceBlendInSpeed = 5.00f;
    this->ArcCurve = NULL;
    this->ArcCompletePercent = 0.80f;
}

