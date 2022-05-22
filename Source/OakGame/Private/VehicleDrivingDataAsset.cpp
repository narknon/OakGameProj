#include "VehicleDrivingDataAsset.h"

UVehicleDrivingDataAsset::UVehicleDrivingDataAsset() {
    this->DesiredSpeed = 2000.00f;
    this->SpeedToActivateBoost = 4000.00f;
    this->SpeedToActivateSpeedHack = 4500.00f;
    this->ReverseSpeed = 1000.00f;
    this->VehicleReverseTime = 2.00f;
    this->VehicleReverseFaceThreshold = 5.00f;
    this->TurnSpeedFactor = 0.50f;
    this->TurnMaxValueDot2 = 0.87f;
    this->TurnMinValueDot2 = 0.40f;
    this->bUsePIDController = true;
    this->Kp = 0.00f;
    this->Ki = 0.00f;
    this->Kd = 0.00f;
    this->MaxDeltaVelIntegral = 3000.00f;
    this->HandbrakeMinVelocity = 1000.00f;
    this->HandbrakeMinTurnDot2 = 0.00f;
    this->ThrottleHandbrakeMinTurnDot2 = -1.00f;
    this->HandbrakeStopMinTurnDot2 = -1.00f;
    this->bActivateThrottleHandbrake = false;
    this->CanDriveCondition = NULL;
    this->SpeedHackForce = 1000.00f;
    this->SpeedHackGravityFactor = 3.00f;
    this->SpeedHackTireGripFactor = 10.00f;
    this->ValidBoostDirectionDot2 = 0.80f;
    this->bWallTest = false;
    this->TestWallsUpdateDelay = 0.10f;
    this->TestWallsTraceLength = 1500.00f;
    this->TestWallsBehindDotFactor = 0.00f;
    this->StuckDisableDelay = 10.00f;
}

