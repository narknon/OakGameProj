#include "OakChallengeSaveGameData.h"

FOakChallengeSaveGameData::FOakChallengeSaveGameData() {
    this->CompletedCount = 0;
    this->bIsActive = false;
    this->bCurrentlyCompleted = false;
    this->CompletedProgressLevel = 0;
    this->ProgressCounter = 0;
    this->DefaultChallengeObj = NULL;
}

