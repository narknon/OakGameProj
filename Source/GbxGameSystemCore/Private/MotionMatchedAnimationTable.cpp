#include "MotionMatchedAnimationTable.h"

UMotionMatchedAnimationTable::UMotionMatchedAnimationTable() {
    this->RootMotionBone = TEXT("Hips");
    this->RootMotionBoneUpAxis = EAxis::X;
    this->bUpAxisIsNegative = false;
    this->RootMotionBoneForwardAxis = EAxis::Y;
    this->bForwardAxisIsNegative = true;
    this->RootBoneForwardAxis = EAxis::X;
    this->bRootForwardAxisIsNegative = false;
    this->RootBoneUpAxis = EAxis::Z;
    this->bRootUpAxisIsNegative = false;
    this->NoMotionSpeed = 1.00f;
    this->bUseIdlePoseDriving = false;
    this->MinIdleTime = 0.50f;
    this->DynamicToKinematicTransition = EDynamicToKinematicTransition::NoTransition;
    this->BlendToRecoveryTime = 0.02f;
    this->MaxAllowedDeviation = 0.80f;
}

