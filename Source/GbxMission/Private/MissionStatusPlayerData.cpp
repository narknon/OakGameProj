#include "MissionStatusPlayerData.h"

FMissionStatusPlayerData::FMissionStatusPlayerData() {
    this->MissionClass = NULL;
    this->Status = MS_NotStarted;
    this->ActiveObjectiveSet = NULL;
    this->bHasBeenViewedInLog = false;
    this->bKickoffPlayed = false;
    this->LeagueInstance = 0;
}

