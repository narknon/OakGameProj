#include "AIAspectSettings_NavigationAdvanced.h"

FAIAspectSettings_NavigationAdvanced::FAIAspectSettings_NavigationAdvanced() {
    this->bCanMove = false;
    this->bReachedRequiresDirect = false;
    this->StrafeType = EGbxStrafeType::Default;
    this->PathType = EGbxPathType::None;
    this->bStopWhenReached = false;
    this->bCanRunWhenAtGoal = false;
    this->bUpdateGoalWhileRunning = false;
    this->Cheats = EGbxNavGoalCheats::None;
    this->bCanStartWhenGoalIsUncertain = false;
    this->bMoveEvenIfUnreachable = false;
}

