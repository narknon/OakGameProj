#include "FeedbackDataFirstPersonImpulse.h"

FFeedbackDataFirstPersonImpulse::FFeedbackDataFirstPersonImpulse() {
    this->bUseDurationFromCameraShake = false;
    this->CameraShakeDurationEaseInWeight = 0.00f;
    this->EaseInDuration = 0.00f;
    this->EaseOutDuration = 0.00f;
    this->bOffsetRotationByDirection = false;
    this->ZoomedEffectScale = 0.00f;
}

