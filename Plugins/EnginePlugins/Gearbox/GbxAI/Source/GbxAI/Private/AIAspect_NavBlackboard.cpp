#include "AIAspect_NavBlackboard.h"

UAIAspect_NavBlackboard::UAIAspect_NavBlackboard() {
    this->MinOffsetInFrontOfTarget = 0.00f;
    this->MaxOffsetInFrontOfTarget = 0.00f;
    this->OffsetAngle = 0.00f;
    this->Reach = EGbxNavGoalReach::Exact;
}

