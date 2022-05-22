#include "ZoneMapIconInfo.h"

FZoneMapIconInfo::FZoneMapIconInfo() {
    this->IconAnchor = NULL;
    this->IconPOIComponent = NULL;
    this->IconClass = NULL;
    this->ChallengeComponent = NULL;
    this->bIsDynamic = false;
    this->bShowDynamicInNonCurrentMap = false;
    this->bIsPlayer = false;
    this->bShowInMiniMap = false;
    this->bShowInZoneMap = false;
    this->TargetedVehicle = NULL;
    this->WaypointStatus = ZMM_AvailableMission;
    this->bMissionTrackerIcon = false;
    this->bOutOfMapWaypoint = false;
    this->ChallengeStatus = ZMC_AvailableChallenge;
    this->ChallengeRadius = 0;
    this->ChallengeClass = NULL;
}

