#include "DuelArena.h"
#include "Net/UnrealNetwork.h"


float ADuelArena::GetTimeBeforeDuelStarts() const {
    return 0.0f;
}

float ADuelArena::GetMaxDuelLength() const {
    return 0.0f;
}

float ADuelArena::GetMaxArenaRadius() const {
    return 0.0f;
}

float ADuelArena::GetDuelTimeRemaining() const {
    return 0.0f;
}

void ADuelArena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADuelArena, DuelingPlayers);
    DOREPLIFETIME(ADuelArena, DuelStatus);
    DOREPLIFETIME(ADuelArena, TimerStartTime);
    DOREPLIFETIME(ADuelArena, NumParticipants);
    DOREPLIFETIME(ADuelArena, DuelMode);
}

ADuelArena::ADuelArena() {
    this->ArenaSetupTime = 10.00f;
    this->ArenaTakeDownTime = 3.00f;
    this->DuelGlobals = NULL;
    this->DuelManager = NULL;
    this->DuelStatus = EActiveDuelStatus::WaitingToStart;
    this->TimerStartTime = -1.00f;
    this->NumParticipants = 0;
    this->DuelMode = EDuelMode::OnFoot;
}

