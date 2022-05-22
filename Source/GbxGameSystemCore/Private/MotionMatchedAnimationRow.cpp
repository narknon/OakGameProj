#include "MotionMatchedAnimationRow.h"

FMotionMatchedAnimationRow::FMotionMatchedAnimationRow() {
    this->bOverrideForward = false;
    this->bOverrideUp = false;
    this->RootBoneToRootBodyOffset = 0.00f;
    this->OffsetCalculationAxis = EAxis::None;
    this->bOffsetCalculationAxisIsNegative = false;
    this->SampleTime = 0.00f;
    this->PoseDriverStrength = 0.00f;
}

