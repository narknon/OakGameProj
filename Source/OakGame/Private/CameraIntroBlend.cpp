#include "CameraIntroBlend.h"

FCameraIntroBlend::FCameraIntroBlend() {
    this->TimeBeforeAllowingMovingCamera = 0.00f;
    this->StartBlend = 0.00f;
    this->EndBlend = 0.00f;
    this->bUseACurve = false;
    this->DampingLocation = 0.00f;
    this->DampingRotation = 0.00f;
}

