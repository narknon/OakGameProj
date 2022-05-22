#include "GearUpGameMode.h"

class AActor;
class UGearUpData;
class ACharacter;

void AGearUpGameMode::StartTimer() {
}

void AGearUpGameMode::RespawnAllDeadPlayers() {
}

void AGearUpGameMode::ResetGearUpGameMode() {
}

void AGearUpGameMode::RandomlySelectActorsWithinDeathCircle(int32 NumberToSelect, TArray<AActor*>& InActors, TArray<AActor*>& OutActors) {
}



void AGearUpGameMode::InitializeGearUpGameMode(UGearUpData* Data) {
}

void AGearUpGameMode::GearUpRunComplete() {
}

void AGearUpGameMode::FlagImmunePlayer(ACharacter* Character) {
}


void AGearUpGameMode::DisableStorm() {
}




void AGearUpGameMode::BroadcastGearUpSupplyDrop() {
}

void AGearUpGameMode::BroadcastGearUpRespawn() {
}

void AGearUpGameMode::BroadcastGearUpNewCircle() {
}

void AGearUpGameMode::BroadcastGearUpCircleClosing() {
}

AGearUpGameMode::AGearUpGameMode() {
    this->GearUpGameState = NULL;
    this->GearUpData = NULL;
    this->DeathCircle = NULL;
    this->DeathCircleMesh = NULL;
    this->TransitionIcon = NULL;
    this->DeathCircleIcon = NULL;
    this->DeathCircleHeight = 0.00f;
    this->ScreenParticleMaxDistance = 0.00f;
    this->FogParticleMaxDistance = 0.00f;
    this->TransitionTime = 0.00f;
    this->ActiveCircleRadius = 0.00f;
    this->TargetCircleRadius = 0.00f;
    this->StormDamageSource = NULL;
    this->bRespawnDeadPlayers = false;
    this->TimeUntilNextParticleCheck = 0.00f;
    this->bGearUpRunActive = false;
}

