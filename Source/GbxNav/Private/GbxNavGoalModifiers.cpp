#include "GbxNavGoalModifiers.h"

FGbxNavGoalModifiers::FGbxNavGoalModifiers() {
    this->OffsetType = EGbxOffsetType::Local;
    this->bAddAgentRadius = false;
    this->bAddAgentHeight = false;
    this->bAddGoalRadius = false;
    this->bAddGoalHeight = false;
    this->bAdjustHeightForMelee = false;
    this->bCenterOnFloor = false;
    this->VerticalFlyOffset = 0.00f;
}

