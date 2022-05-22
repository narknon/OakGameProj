#include "CameraModeData.h"

UCameraModeData::UCameraModeData() {
    this->BlendInTime = 0.60f;
    this->bBlendOut = true;
    this->bIsFirstPerson = true;
    this->bShowViewModel = true;
    this->bAllowPitchInversion = false;
    this->bAutoPerspectiveOverride = false;
    this->bResetCameraRollOnStart = true;
    this->bAllowIntentionalClipping = false;
    this->bInterruptTransitionWhenClipping = false;
    this->bIncludeInDebugRotation = false;
    this->ViewTargetRotationUpdateMethod = EViewTargetRotationUpdateMethod::FromCamera;
    this->FirstPersonBlendType = ECameraModeTransitionBlendType::Full;
    this->ThirdPersonBlendType = ECameraModeTransitionBlendType::Full;
    this->bDisableSeparateTranslucency = false;
}

