#include "MantleActionData.h"

FMantleActionData::FMantleActionData() {
    this->Type = EMantleType::MantleUp;
    this->Animation = NULL;
    this->HeightMinimum = 0.00f;
    this->AlignTime = 0.00f;
    this->PercentThroughAnimationToFinishMantle = 0.00f;
    this->bAlignRotation = false;
    this->bMustLookAt = false;
}

