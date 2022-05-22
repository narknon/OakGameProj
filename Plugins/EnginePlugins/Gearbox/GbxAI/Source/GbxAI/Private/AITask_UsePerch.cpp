#include "AITask_UsePerch.h"

UAITask_UsePerch::UAITask_UsePerch() {
    this->PerchComponent = NULL;
    this->Tag = NULL;
    this->MoveToTask = NULL;
    this->State = ESmartObjectTaskState::Uninitialized;
}

