#include "ExitDownStateInformation.h"

FExitDownStateInformation::FExitDownStateInformation() {
    this->ExitReason = EExitDownStateReason::ExitDownStateReason_None;
    this->CustomExitNotification = NULL;
}

