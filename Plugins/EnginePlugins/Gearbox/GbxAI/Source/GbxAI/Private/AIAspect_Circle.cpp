#include "AIAspect_Circle.h"

UAIAspect_Circle::UAIAspect_Circle() {
    this->Distance = 1500.00f;
    this->Direction = ECircleDirection::Left;
    this->MinOffsetInFrontOfTarget = 0.00f;
    this->MaxOffsetInFrontOfTarget = 0.00f;
    this->OffsetAngle = 0.00f;
    this->GoalUpdateDistance = 500.00f;
    this->bTestDirectPath = false;
    this->bDebugTestDirectPath = false;
    this->Reach = EGbxNavGoalReach::Exact;
}

