#include "GFxMissionLogMissionItem.h"

FGFxMissionLogMissionItem::FGFxMissionLogMissionItem() {
    this->bValid = false;
    this->Type = EGFxMissionLogMissionItemType::Mission;
    this->MissionClass = NULL;
    this->AsOakMission = NULL;
    this->MissionType = EOakMissionType::Default;
    this->bIsTracked = false;
    this->bIsBlocked = false;
    this->bIsCompleted = false;
    this->bIsInCurrentZone = false;
    this->bHasBeenViewed = false;
    this->IconType = EGFxMissionLogMissionIconType::Normal;
    this->NumFriendsPlayingThisMission = 0;
}

