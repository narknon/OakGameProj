#include "VehicleBoostData.h"

UVehicleBoostData::UVehicleBoostData() {
    this->bApplyFullThrottleWhenBoosting = false;
    this->MinBoostDuration = -1.00f;
    this->BoostPoolData = NULL;
    this->bContinuousStartCheck = false;
    this->StartBoostCondition = NULL;
    this->StopBoostCondition = NULL;
    this->bStopConditionCanOverrideMinBoostDuration = false;
    this->bPauseWhenInAir = false;
    this->MinStartBoostSpeed = 0.00f;
    this->MinStartBoostAngle = 180.00f;
    this->BoostCooldownTime = 0.00f;
    this->bInstantBoost = false;
    this->InstantBoostCharges = 0;
    this->InstantBoostDuration = 0.00f;
    this->bModifySteering = false;
    this->SteeringRatioInterpSpeed = 5.00f;
}

