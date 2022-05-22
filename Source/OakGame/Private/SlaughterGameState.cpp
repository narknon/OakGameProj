#include "SlaughterGameState.h"

class AOakPlayerState;

void ASlaughterGameState::BroadcastRoundComplete_Implementation(int32 RoundNumber) {
}

void ASlaughterGameState::BroadcastPlayerDied_Implementation(AOakPlayerState* PlayerState) {
}

void ASlaughterGameState::BroadcastNotAllPlayersAssembled_Implementation() {
}

void ASlaughterGameState::BroadcastNewWave_Implementation(bool bBossWave, int32 CountdownDuration) {
}

void ASlaughterGameState::BroadcastNewRound_Implementation(int32 RoundNumber) {
}

void ASlaughterGameState::BroadcastAllPlayersDied_Implementation() {
}

ASlaughterGameState::ASlaughterGameState() {
    this->SlaughterRoundStartNotificationData = NULL;
    this->SlaughterNewRoundWaveNotificationData = NULL;
    this->SlaughterRoundCompletedNotificationData = NULL;
    this->SlaughterFailedNotificationData = NULL;
    this->SlaughterNotAllPlayersAssembledNotificationData = NULL;
    this->NewRoundNotificationPriority = 0;
    this->NewWaveNotificationPriority = 0;
    this->RoundCompleteNotificationPriority = 0;
    this->PlayerDiedNotificationPriority = 0;
    this->TeamWipeNotificationPriority = 0;
    this->NotAllPlayersAssembledNotificationPriority = 0;
    this->WaveCountdown = 0;
}

