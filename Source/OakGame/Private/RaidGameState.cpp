#include "RaidGameState.h"
#include "Net/UnrealNetwork.h"

class AOakPlayerState;

void ARaidGameState::OnRep_NumSpectatablePlayers() {
}

void ARaidGameState::BroadcastRaidComplete_Implementation() {
}

void ARaidGameState::BroadcastRaidBegun_Implementation(int32 CountdownDuration) {
}

void ARaidGameState::BroadcastPlayerDied_Implementation(AOakPlayerState* PlayerState) {
}

void ARaidGameState::BroadcastLegComplete_Implementation(int32 LegNumber) {
}

void ARaidGameState::BroadcastAllPlayersDied_Implementation() {
}

void ARaidGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARaidGameState, NumSpectatablePlayers);
}

ARaidGameState::ARaidGameState() {
    this->NotificationData = NULL;
    this->RaidStartNotificationData = NULL;
    this->RaidFailedNotificationData = NULL;
    this->RaidCountdownNotificationData = NULL;
    this->RaidSurvivedID = EGameModeNotificationType::Raid_RaidSurvived;
    this->RaidDefeatID = EGameModeNotificationType::Raid_Defeat;
    this->RaidStartID = EGameModeNotificationType::Raid_Start;
    this->RaidCountdownID = EGameModeNotificationType::Raid_CountDown;
    this->SpectatorHUDData = NULL;
    this->SpectatorHUDState = NULL;
    this->RaidBeginningNotificationPriority = 0;
    this->LegCompleteNotificationPriority = 0;
    this->RaidCompleteNotificationPriority = 0;
    this->PlayerDiedNotificationPriority = 0;
    this->TeamWipeNotificationPriority = 0;
    this->RaidCountdown = 0;
    this->NumSpectatablePlayers = 0;
}

