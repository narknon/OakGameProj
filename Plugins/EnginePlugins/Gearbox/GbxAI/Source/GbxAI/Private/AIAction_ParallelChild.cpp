#include "AIAction_ParallelChild.h"

UAIAction_ParallelChild::UAIAction_ParallelChild() {
    this->bCanPreventActionFromStarting = true;
    this->bCanCauseActionToSucceed = true;
    this->bCanCauseActionToFail = true;
    this->bMustFinish = true;
}

