#include "ActiveMissionIconData.h"

FActiveMissionIconData::FActiveMissionIconData() {
    this->WaypointRadius = 0;
    this->IconData = NULL;
    this->MissionClass = NULL;
    this->VisibleDistanceOverride = 0.00f;
    this->HiddenDistanceOverride = 0.00f;
    this->bHideAreaWaypoint = false;
    this->AreaComponentClassOverride = NULL;
}

