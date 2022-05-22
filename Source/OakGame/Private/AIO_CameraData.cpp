#include "AIO_CameraData.h"

UAIO_CameraData::UAIO_CameraData() {
    this->CameraStates.AddDefaulted(1);
    this->CameraEntryLocationDuration = 0.50f;
    this->CameraEntryRotationDuration = 0.50f;
    this->TargetFOV = 70.00f;
    this->TargetFOVSplitscreen = 70.00f;
    this->TargetFOVVerticalSplitscreen = 70.00f;
    this->TargetFOVQuadSplitscreen = 70.00f;
    this->bRestoreCameraRotation = true;
    this->DOFMagnitudeInterpTime = 0.50f;
    this->VignetteInterpTime = 0.00f;
}

