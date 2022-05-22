#include "PollActionInfo.h"

FPollActionInfo::FPollActionInfo() {
    this->PollAction = NULL;
    this->Weight = 0.00f;
    this->MaxUsagePerEvent = 0;
    this->ActionID = 0;
    this->NbTimeUsedInEvent = 0;
    this->LastSelectedValue = 0.00f;
    this->VoteCount = 0;
}

