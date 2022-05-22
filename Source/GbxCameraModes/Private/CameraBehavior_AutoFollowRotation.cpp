#include "CameraBehavior_AutoFollowRotation.h"

UCameraBehavior_AutoFollowRotation::UCameraBehavior_AutoFollowRotation() {
    this->bKeepRelativeRotation = true;
    this->bRelativeToBase = false;
    this->bFollowPitch = true;
    this->bFollowYaw = true;
    this->bFollowRoll = true;
    this->RotationRate = 5.00f;
}

