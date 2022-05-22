#include "ZoneMapMissionPOIBlacklistEntry.h"

FZoneMapMissionPOIBlacklistEntry::FZoneMapMissionPOIBlacklistEntry() {
    this->MissionBlacklistCondition = NULL;
    this->bBlacklistMissionGiving = false;
    this->ObjectiveBlacklistCondition = NULL;
    this->bBlacklistObjectiveWaypoint = false;
}

