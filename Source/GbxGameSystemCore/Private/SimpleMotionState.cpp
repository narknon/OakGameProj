#include "SimpleMotionState.h"

FSimpleMotionState::FSimpleMotionState() {
    this->MotionType = ESimpleMotionType::None;
    this->MinSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->SpeedControlCurve = NULL;
    this->Acceleration = 0.00f;
    this->bScaleTransformByValue = false;
    this->bScaleSpeedByValue = false;
    this->bScaleAccelerationByValue = false;
}

