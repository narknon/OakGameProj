#include "ZoneMapMissionWaypointEntry.h"

FZoneMapMissionWaypointEntry::FZoneMapMissionWaypointEntry() {
    this->PointOfInterestType = NULL;
    this->MissionWaypointRadius = 0;
    this->BlacklistIndex = 0;
    this->bOutOfMap = false;
    this->bHideMissionAreaWaypoint = false;
    this->AreaComponentClassOverride = NULL;
}

