#include "TimedMissionData.h"

FTimedMissionData::FTimedMissionData() {
    this->MissionClass = NULL;
    this->SecondsLeft = 0.00f;
    this->StartingSeconds = 0.00f;
    this->bTimerRunning = false;
    this->bFailOnTimerExpiration = false;
    this->bTimerExpired = false;
}

