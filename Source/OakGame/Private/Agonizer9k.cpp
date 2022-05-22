#include "Agonizer9k.h"
#include "Net/UnrealNetwork.h"

void AAgonizer9k::StopSaw() {
}

void AAgonizer9k::StartSponsorsTimer() {
}

void AAgonizer9k::StartSaw() {
}

void AAgonizer9k::StartBossFight() {
}

void AAgonizer9k::ResetBossTimers() {
}

void AAgonizer9k::EquipSawAnimDone() {
}

void AAgonizer9k::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAgonizer9k, FightPhase);
    DOREPLIFETIME(AAgonizer9k, SawTargetRotation);
    DOREPLIFETIME(AAgonizer9k, SawTarget);
    DOREPLIFETIME(AAgonizer9k, SawState);
}

AAgonizer9k::AAgonizer9k() {
    this->FightPhase = EA9KFightPhase::NotStarted;
    this->SawTarget = NULL;
    this->SawState = EA9KSawState::NotStarted;
    this->SawAngleReached = 10.00f;
    this->TimeSinceBeginingOfPhase = 0.00f;
    this->TimeSinceBeginingOfFight = 0.00f;
    this->TimeSinceLastSponsorBegan = 0.00f;
    this->Blackboard = NULL;
    this->SawTimeCooldown = 3.00f;
    this->SawRotateSpeedTryToReachTarget = 60.00f;
    this->SawTimeBetweenReachAndEquip = 2.00f;
    this->SawTimeAnticipation = 3.00f;
    this->SawPercentageStopFollowAnticipation = 0.50f;
    this->WaitForEquipAnimDoneFailSafe = 6.00f;
}

