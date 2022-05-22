#include "OakSaveGame.h"

UOakSaveGame::UOakSaveGame() {
    this->SaveGameId = 0;
    this->bLevelledSaveNeedsFixup = false;
    this->LastSaveTimestamp = 0;
    this->TimePlayedSeconds = 0;
    this->AccumulatedLevelPersistenceResetTimerSeconds = 0;
    this->ExperiencePoints = 0;
    this->LastPlayThroughIndex = 0;
    this->PlaythroughsCompleted = 0;
    this->bShowNewPlaythroughNotification = false;
    this->VehicleLastLoadoutIndex = -1;
    this->bHasPlayedSpecialEchoLogInsertAlready = false;
    this->PreferredGroupMode = EOakGameStateUIGroupMode::Cooperation;
    this->ZoneMapFODSavedData = NULL;
    this->bIsNetReplicating = false;
    this->bOptionalObjectiveRewardFixupApplied = true;
    this->bVehiclePartRewardsFixupApplied = true;
    this->bLevelledSaveVehiclePartRewardsFixupApplied = true;
    this->LastActiveLeague = 0;
    this->LastActiveLeagueInstance = 0;
    this->CurrentVaultCardDaySeed = 0;
    this->CurrentVaultCardWeekSeed = 0;
    this->NameCharacterLimit = 20;
}

