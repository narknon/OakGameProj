#include "RaidGameMode.h"

void ARaidGameMode::SetForceBalanceToMaxPlayers(bool bForced) {
}

void ARaidGameMode::RespawnAllSpectatingPlayers() {
}

void ARaidGameMode::OnNumPlayersChanged(int32 NewNumPlayers) {
}





int32 ARaidGameMode::GetNumPlayerSpectators() const {
    return 0;
}

int32 ARaidGameMode::GetNumPlayersAlive() const {
    return 0;
}

void ARaidGameMode::BroadcastRaidComplete() {
}

void ARaidGameMode::BroadcastRaidBegun(int32 CountdownDuration) {
}

void ARaidGameMode::BroadcastLegComplete(int32 LegNumber) {
}

ARaidGameMode::ARaidGameMode() {
    this->bSpectateWhenDead = true;
    this->RaidGameState = NULL;
}

