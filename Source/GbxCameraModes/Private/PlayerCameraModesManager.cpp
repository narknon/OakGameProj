#include "PlayerCameraModesManager.h"

void APlayerCameraModesManager::UpdateCameraShakeFromGbxFeedback(const FActiveGbxFeedbackEffect& TrackedFeedback) {
}

void APlayerCameraModesManager::UpdateCameraShakeFromFeedback(FActiveTrackedFeedback& TrackedFeedback) {
}

APlayerCameraModesManager::APlayerCameraModesManager() {
    this->ViewTargetClippingRadius = 10.00f;
    this->CameraModesManager = NULL;
    this->LastViewTarget = NULL;
    this->ViewTargetFlags = 0;
}

