#include "GearUpGameState.h"
#include "Net/UnrealNetwork.h"

class AOakMissionSpawner;
class ACharacter;

void AGearUpGameState::UpdateGameStateAudio_Implementation(FVector CircleLocation, float CircleRadius) {
}

void AGearUpGameState::StopPlayerStormAudio_Implementation(ACharacter* Player) {
}

void AGearUpGameState::StartPlayerStormAudio_Implementation(ACharacter* Player) {
}

void AGearUpGameState::OnRep_GearUpDataPrivate() {
}

void AGearUpGameState::MulticastSpawnFogParticle_Implementation(ACharacter* Character) {
}

void AGearUpGameState::MulticastRemoveFogParticle_Implementation(ACharacter* Character) {
}

float AGearUpGameState::GetElapsedDeathCircleTime() const {
    return 0.0f;
}

void AGearUpGameState::BroadcastGearUpSupplyDrop_Implementation() {
}

void AGearUpGameState::BroadcastGearUpRespawn_Implementation() {
}

void AGearUpGameState::BroadcastGearUpNewCircle_Implementation() {
}

void AGearUpGameState::BroadcastGearUpCircleClosing_Implementation() {
}

void AGearUpGameState::AddActiveAirdrop(AOakMissionSpawner* AirDrop) {
}

void AGearUpGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGearUpGameState, GearUpDataPrivate);
    DOREPLIFETIME(AGearUpGameState, DeathCircleStatus);
    DOREPLIFETIME(AGearUpGameState, StableEndTime);
    DOREPLIFETIME(AGearUpGameState, TransitionEndTime);
    DOREPLIFETIME(AGearUpGameState, DeathCirclePrivate);
    DOREPLIFETIME(AGearUpGameState, ActiveStage);
    DOREPLIFETIME(AGearUpGameState, ActivePoint);
    DOREPLIFETIME(AGearUpGameState, NextPoint);
}

AGearUpGameState::AGearUpGameState() {
    this->GearUpDataPrivate = NULL;
    this->DeathCircleStatus = DCS_None;
    this->StableEndTime = 0.00f;
    this->TransitionEndTime = 0.00f;
    this->DeathCirclePrivate = NULL;
    this->ActiveStage = 0;
    this->ActivePoint = NULL;
    this->NextPoint = NULL;
    this->PreviousGroupMode = EOakGameStateUIGroupMode::Unknown;
}

