#include "SlaughterGameMode.h"

void ASlaughterGameMode::BroadcastRoundComplete(int32 RoundNumber) {
}

void ASlaughterGameMode::BroadcastNotAllPlayersAssembled() {
}

void ASlaughterGameMode::BroadcastNewWave(bool bBossWave, int32 CountdownDuration) {
}

void ASlaughterGameMode::BroadcastNewRound(int32 RoundNumber) {
}

ASlaughterGameMode::ASlaughterGameMode() {
    this->SlaughterGameState = NULL;
}

