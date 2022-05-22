#include "PatchExpansionData.h"

UPatchExpansionData::UPatchExpansionData() {
    this->RegionManagerData = NULL;
    this->LoadingScreenData = NULL;
    this->SourceLeague = OL_None;
    this->LeagueOverviewPanelButtonTexture = NULL;
    this->LeagueChallengesPanelButtonTexture = NULL;
    this->LeagueOverviewPanelButtonTextureSplit = NULL;
    this->LeagueChallengesPanelButtonTextureSplit = NULL;
    this->LeagueFinalDay = 0;
    this->ZoneMapList = NULL;
    this->GlobalVaultCardData = NULL;
    this->ItemPoolToReplaceWithRandomItemPool = NULL;
}

