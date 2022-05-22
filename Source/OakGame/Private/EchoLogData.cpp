#include "EchoLogData.h"

UEchoLogData::UEchoLogData() {
    this->BlockedStartMethod = EEchoLogBlockedStartMethod::Cancel;
    this->DisplayCategory = EEchoLogDisplayCategory::EchoLog;
    this->bShouldShowInUI = true;
}

