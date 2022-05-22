#include "AIActionExecutionSettings.h"

FAIActionExecutionSettings::FAIActionExecutionSettings() {
    this->bEnabled = false;
    this->SuccessTransition = EAIActionResultTransition::Stop;
    this->FailureTransition = EAIActionResultTransition::Stop;
    this->bAlwaysReportSuccess = false;
    this->CheckCanStartPeriod = 0.00f;
}

