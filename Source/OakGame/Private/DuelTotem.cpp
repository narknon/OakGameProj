#include "DuelTotem.h"
#include "Net/UnrealNetwork.h"

class AOakCharacter_Player;

void ADuelTotem::OnRep_NumParticipants() {
}

void ADuelTotem::OnRep_DuelState() {
}

void ADuelTotem::OnRep_DestroyReason() {
}

void ADuelTotem::OnRep_AcceptedPlayers() {
}





void ADuelTotem::HandleUsedEvent(const FUseEvent& UseEvent) {
}

float ADuelTotem::GetTimeBeforeTimeout() const {
    return 0.0f;
}

float ADuelTotem::GetTimeBeforeDuelStarts() const {
    return 0.0f;
}

AOakCharacter_Player* ADuelTotem::GetPlayerInstigator() const {
    return NULL;
}

int32 ADuelTotem::GetNumParticipants() const {
    return 0;
}

TArray<AOakCharacter_Player*> ADuelTotem::GetAcceptedPlayers() const {
    return TArray<AOakCharacter_Player*>();
}

void ADuelTotem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADuelTotem, PlayerInstigator);
    DOREPLIFETIME(ADuelTotem, NumParticipants);
    DOREPLIFETIME(ADuelTotem, AcceptedPlayers);
    DOREPLIFETIME(ADuelTotem, TimerStartTime);
    DOREPLIFETIME(ADuelTotem, DestroyReason);
    DOREPLIFETIME(ADuelTotem, DuelState);
    DOREPLIFETIME(ADuelTotem, DuelMode);
}

ADuelTotem::ADuelTotem() {
    this->FailsafeDestroyDelay = 5.00f;
    this->UsableComponent = NULL;
    this->PlayerInstigator = NULL;
    this->NumParticipants = 0;
    this->TimerStartTime = 0.00f;
    this->DestroyReason = EDuelTotemDestroyReason::None;
    this->DuelState = EPotentialDuelState::None;
    this->DuelMode = EDuelMode::OnFoot;
    this->DuelGlobals = NULL;
}

