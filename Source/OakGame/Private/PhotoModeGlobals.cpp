#include "PhotoModeGlobals.h"

UPhotoModeGlobals::UPhotoModeGlobals() {
    this->PhotoModeMenuData = NULL;
    this->PhotoModeControllerType = NULL;
    this->MinFOV = 10.00f;
    this->MaxFOV = 150.00f;
    this->MinDOFIntensity = 0.00f;
    this->MaxDOFIntensity = 0.25f;
    this->MinFocalDistance = 1.00f;
    this->MaxFocalDistance = 1000.00f;
    this->MinFocalRegion = 0.00f;
    this->MaxFocalRegion = 20000.00f;
    this->MinContrast = 0.00f;
    this->MaxContrast = 2.00f;
    this->MinSaturation = 0.00f;
    this->MaxSaturation = 2.00f;
    this->MinGamma = 0.00f;
    this->MaxGamma = 2.00f;
    this->MinGain = 0.00f;
    this->MaxGain = 2.00f;
    this->MinQuality = 50.00f;
    this->MaxQuality = 100.00f;
    this->MinRoll = -180.00f;
    this->MaxRoll = 180.00f;
    this->CameraModeBlendInTime = 1.50f;
    this->CameraModeBlendOutTime = 1.50f;
    this->CameraForwardBackScale = 2.00f;
    this->CameraForwardBackClamp = 2.00f;
    this->CameraLeftRightScale = 2.00f;
    this->CameraLeftRightClamp = 2.00f;
    this->CameraUpDownScale = 1.00f;
    this->CameraUpDownClamp = 1.00f;
    this->CameraDeadZone = 0.25f;
    this->CameraInputPitchScale = 1.50f;
    this->CameraInputYawScale = 1.50f;
    this->MinFringeIntensity = 0.00f;
    this->MaxFringeIntensity = 5.00f;
    this->StylizeStat = NULL;
}

