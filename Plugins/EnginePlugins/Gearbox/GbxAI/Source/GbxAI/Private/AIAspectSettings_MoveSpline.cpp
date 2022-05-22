#include "AIAspectSettings_MoveSpline.h"

FAIAspectSettings_MoveSpline::FAIAspectSettings_MoveSpline() {
    this->LookDistance = 0.00f;
    this->MissNavigationStep = 0.00f;
    this->MissNavigationStepDistance = 0.00f;
    this->AdditionnalLookDistanceSpeedFactor = 0.00f;
    this->SnapToNavigation = 0.00f;
    this->bSnapToNavigation = false;
    this->GoalUpdateDistance = 0.00f;
    this->Reach = EGbxNavGoalReach::Exact;
}

