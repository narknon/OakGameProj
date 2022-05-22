#include "OakMission.h"

class AOakGameMode;

int32 UOakMission::GetNumberOfCompletedMissionChallenges() const {
    return 0;
}

AOakGameMode* UOakMission::GetCurrentGameMode() {
    return NULL;
}

UOakMission::UOakMission() {
    this->MissionLeague = OL_None;
    this->bAutoActivateLeagueMission = false;
    this->MapTravelID = 0;
    this->MissionType = EOakMissionType::Default;
    this->GiveWeaponObjective = NULL;
    this->bRequireMissionSpawnerActor = false;
    this->bBroadcastMissionCompletionFriendEvent = true;
    this->MissionDialogEnumValue = NULL;
    this->bSuppressDiscoveryAfterFailure = false;
}

