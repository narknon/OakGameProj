#include "AimControlData.h"

UAimControlData::UAimControlData() {
    this->InputCurveExponent = 2.00f;
    this->RotationCap = 720.00f;
    this->AccelRate = 40.00f;
    this->DecelRate = 40.00f;
    this->AccelRateRawBias = 0.25f;
    this->MinFOVScaling = 0.50f;
    this->MinAcceptedFOVScale = 0.20f;
    this->MinFOVScalingMouse = 0.50f;
    this->MinAcceptedFOVScaleMouse = 0.20f;
    this->HighDeadZone = 0.85f;
    this->AxialDeadZoneBegin = 0.50f;
    this->AxialDeadZoneRatio = 1.00f;
}

