#include "DuelManager.h"
#include "Net/UnrealNetwork.h"

class AOakCharacter_Player;

void ADuelManager::MulticastUnacceptedDuel_Implementation(AOakCharacter_Player* Player, AOakCharacter_Player* DuelInstigator) {
}

void ADuelManager::MulticastDuelWon_Implementation(const TArray<AOakCharacter_Player*>& Winners, EDuelClassification Classification) {
}

void ADuelManager::MulticastDuelTimedOut_Implementation(AOakCharacter_Player* Player) {
}

void ADuelManager::MulticastDuelStarted_Implementation(const TArray<AOakCharacter_Player*>& Participants) {
}

void ADuelManager::MulticastDuelSetupStarted_Implementation(const TArray<AOakCharacter_Player*>& Participants) {
}

void ADuelManager::MulticastDuelLost_Implementation(AOakCharacter_Player* Player, EDuelLoseReason LoseReason, EDuelClassification Classification) {
}

void ADuelManager::MulticastDuelLengthElapsed_Implementation(AOakCharacter_Player* Player) {
}

void ADuelManager::MulticastDuelInitiated_Implementation(AOakCharacter_Player* Player, AOakCharacter_Player* TargetedPlayer) {
}

void ADuelManager::MulticastDuelCanceled_Implementation(AOakCharacter_Player* Player) {
}

void ADuelManager::MulticastAcceptedDuel_Implementation(AOakCharacter_Player* Player, AOakCharacter_Player* DuelInstigator) {
}

void ADuelManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADuelManager, ActiveDuelArenas);
}

ADuelManager::ADuelManager() {
    this->DuelGlobals = NULL;
}

