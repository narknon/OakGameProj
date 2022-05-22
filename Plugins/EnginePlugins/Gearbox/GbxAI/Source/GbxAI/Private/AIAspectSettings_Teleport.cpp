#include "AIAspectSettings_Teleport.h"

FAIAspectSettings_Teleport::FAIAspectSettings_Teleport() {
    this->bCloak = false;
    this->bTraceToGround = false;
    this->bClearVelocity = false;
    this->bChangeRotation = false;
    this->bClearGoalOnStop = false;
    this->bUseSpeedInsteadOfTime = false;
    this->bUpdateGoal = false;
}

