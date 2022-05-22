#include "InitialRotationAxisParams.h"

FInitialRotationAxisParams::FInitialRotationAxisParams() {
    this->MinAngle = 0.00f;
    this->MaxAngle = 0.00f;
    this->bRelativeToBase = false;
    this->bLinearInterpolation = false;
    this->Speed = 0.00f;
    this->SpeedScaleCurve = NULL;
    this->Delay = 0.00f;
}

