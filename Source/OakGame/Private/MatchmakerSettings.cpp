#include "MatchmakerSettings.h"

UMatchmakerSettings::UMatchmakerSettings() {
    this->RetryDelaySeconds = 4.00f;
    this->RetryJitterSeconds = 3.00f;
    this->SearchThresholdSeconds = 5.00f;
    this->MatchmakingRoundDuration = 40.00f;
    this->BackfillMatchmakingRoundDuration = 20.00f;
    this->HostTravelDelaySeconds = 5.00f;
    this->InitialAdvertiseChance = 0.15f;
    this->ConfirmPlayersCountdownSeconds = 10.00f;
    this->ConfirmPlayersQuickStartCountdownSeconds = 10.00f;
}

