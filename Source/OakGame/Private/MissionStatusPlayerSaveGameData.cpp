#include "MissionStatusPlayerSaveGameData.h"

FMissionStatusPlayerSaveGameData::FMissionStatusPlayerSaveGameData() {
    this->Status = MS_NotStarted;
    this->bHasBeenViewedInLog = false;
    this->bKickoffPlayed = false;
    this->LeagueInstance = 0;
    this->DlcPackageId = 0;
}

