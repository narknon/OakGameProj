#include "DuelModeSettings.h"

FDuelModeSettings::FDuelModeSettings() {
    this->DuelArenaTimeout = 0.00f;
    this->DuelChallengeTimeout = 0.00f;
    this->bUseDuelStartDelay = false;
    this->DuelStartDelay = 0.00f;
    this->DuelTotemSpawnTraceVertOffset = 0.00f;
    this->DuelTotemSpawnInFrontDistance = 0.00f;
    this->DuelTotemSpawnFindGroundDistance = 0.00f;
}

