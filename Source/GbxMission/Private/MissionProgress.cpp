#include "MissionProgress.h"

FMissionProgress::FMissionProgress() {
    this->Mission = NULL;
    this->MissionClass = NULL;
    this->Status = MS_NotStarted;
    this->ActiveObjectiveSet = NULL;
    this->bActivateScriptWhenDependenciesMet = false;
    this->bKickoffPlayed = false;
    this->bHasMissionFailed = false;
    this->bReplicationError = false;
}

