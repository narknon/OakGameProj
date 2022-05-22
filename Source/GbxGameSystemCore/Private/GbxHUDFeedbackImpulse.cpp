#include "GbxHUDFeedbackImpulse.h"

FGbxHUDFeedbackImpulse::FGbxHUDFeedbackImpulse() {
    this->RotationalVelocity = 0.00f;
    this->Springiness = 0.00f;
    this->Damping = 0.00f;
    this->bCircularMotion = false;
    this->bApplyCameraTranslation = false;
    this->CameraTranslationWeight = 0.00f;
    this->bApplyCameraRotation = false;
    this->CameraRotationWeight = 0.00f;
    this->bApplyOriginWorldSpace = false;
    this->OriginWorldSpaceWeight = 0.00f;
}

