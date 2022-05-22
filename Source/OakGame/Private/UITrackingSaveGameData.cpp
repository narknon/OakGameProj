#include "UITrackingSaveGameData.h"

FUITrackingSaveGameData::FUITrackingSaveGameData() {
    this->bHasSeenSkillMenuUnlock = false;
    this->bHasSeenGuardianRankMenuUnlock = false;
    this->bHasSeenEchoBoot_AmmoBar = false;
    this->bHasSeenEchoBoot_ShieldBar = false;
    this->bHasSeenEchoBoot_Grenades = false;
    this->HighestTHVMBreadcrumbSeen = 0;
    this->SavedSpinOffset = 0;
}

