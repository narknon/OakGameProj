#include "TedioreBehavior_Homing.h"

UTedioreBehavior_Homing::UTedioreBehavior_Homing() {
    this->HomingTemplate = NULL;
    this->InitialHomingDelay = 0.50f;
    this->RetryHomingDelay = 0.50f;
    this->OutOfFuelDuration = 5.00f;
    this->GravityScale = 0.50f;
    this->MaxSpeed = 1400.00f;
    this->OnHomingFailed = NULL;
    this->MIRVOnHomingInit = NULL;
    this->MIRVHomingLoopEvent = NULL;
    this->MIRVOnHomingFailed = NULL;
}

