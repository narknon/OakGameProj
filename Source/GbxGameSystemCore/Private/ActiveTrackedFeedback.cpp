#include "ActiveTrackedFeedback.h"

FActiveTrackedFeedback::FActiveTrackedFeedback() {
    this->FeedbackData = NULL;
    this->LastStartTime = 0.00f;
    this->LastRandomShakeTime = 0.00f;
    this->RandomCameraShake = 0.00f;
    this->BaseScale = 0.00f;
    this->CurrentScale = 0.00f;
    this->CurrentCameraShakeScale = 0.00f;
    this->CameraShakeXScale = 0.00f;
    this->CameraShakeYScale = 0.00f;
    this->bRumbleFinished = false;
    this->bShakeFinished = false;
}

