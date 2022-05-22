#include "AIAspectSettings_Navigation.h"

FAIAspectSettings_Navigation::FAIAspectSettings_Navigation() {
    this->bCanMove = false;
    this->bReachedRequiresDirect = false;
    this->StrafeType = EGbxStrafeType::Default;
    this->PathType = EGbxPathType::None;
    this->bStopWhenReached = false;
    this->bCanRunWhenAtGoal = false;
    this->bUpdateGoalWhileRunning = false;
}

