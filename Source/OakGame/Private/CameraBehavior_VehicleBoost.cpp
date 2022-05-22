#include "CameraBehavior_VehicleBoost.h"

UCameraBehavior_VehicleBoost::UCameraBehavior_VehicleBoost() {
    this->FOVScale = 1.10f;
    this->bBlendWithSpeed = true;
    this->BlendInSpeed = 10.00f;
    this->BlendOutSpeed = 5.00f;
    this->bUseBoostFOVAnimation = false;
    this->BoostAnimationDuration = 0.00f;
    this->BoostAnimationFOV = 10.00f;
    this->bAllowBoostFOVAnimationToStop = true;
    this->bSeparatePowerSlideAndNormalBoost = false;
    this->PowerSlideBoostAnimationDuration = 0.00f;
    this->bAllowPowerSlideBoostFOVAnimationToStop = true;
}

