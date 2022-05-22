#include "AIAspectExecutionSettings.h"

FAIAspectExecutionSettings::FAIAspectExecutionSettings() {
    this->bCanPreventActionFromStarting = false;
    this->bCanCauseActionToSucceed = false;
    this->bCanForceActionToSucceed = false;
    this->bCanCauseActionToFail = false;
    this->bMustFinish = false;
}

