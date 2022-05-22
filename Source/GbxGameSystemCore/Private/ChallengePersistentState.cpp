#include "ChallengePersistentState.h"

FChallengePersistentState::FChallengePersistentState() {
    this->ChallengeClass = NULL;
    this->CompletedCount = 0;
    this->CompletedProgressLevel = 0;
    this->bIsActive = false;
    this->bCurrentlyCompleted = false;
    this->ProgressCounter = 0;
    this->CustomPersistentData = NULL;
}

