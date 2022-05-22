#include "AITask_UseLookAtPoint.h"

UAITask_UseLookAtPoint::UAITask_UseLookAtPoint() {
    this->LookAtPointComponent = NULL;
    this->Tag = NULL;
    this->MoveToTask = NULL;
    this->State = ESmartObjectTaskState::Uninitialized;
}

