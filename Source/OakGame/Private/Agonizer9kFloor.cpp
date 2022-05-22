#include "Agonizer9kFloor.h"
#include "WwiseAudioComponent.h"

class AAgonizer9k;

void AAgonizer9kFloor::StopHeatingPipeEmissive(FRing& SectorRing) {
}

void AAgonizer9kFloor::StartSafeSpotPattern(float DelayBeforeStart) {
}

void AAgonizer9kFloor::StartRotationPattern(float DelayBeforeStart) {
}

void AAgonizer9kFloor::StartRingPattern(float DelayBeforeStart) {
}

void AAgonizer9kFloor::StartHeatingPipeEmissive(FRing& SectorRing) {
}

void AAgonizer9kFloor::StartAnticipationSafeSpot_Implementation(const TArray<int32>& SafeSpotSectorIds) {
}

void AAgonizer9kFloor::SetFloorRotationParameters_Implementation(int32 Direction, int32 StartingSectorId) {
}

void AAgonizer9kFloor::SetAgonizerRef(AAgonizer9k* NewAgonizerRef) {
}

void AAgonizer9kFloor::PlayBurstFlameAudio() {
}

void AAgonizer9kFloor::OnWarmUpDone(FSector& FloorSector) {
}

void AAgonizer9kFloor::OnRotationAnticipationDone(FSector& FloorSector, bool IsLast) {
}

void AAgonizer9kFloor::OnFloorPatternDone() {
}

void AAgonizer9kFloor::OnAnticipationOneRingDone(FSector& FloorSector, FRing& SectorRing) {
}

void AAgonizer9kFloor::OnAnticipationDone() {
}

void AAgonizer9kFloor::CreateSectorsDataFromBP() {
}

AAgonizer9kFloor::AAgonizer9kFloor() {
    this->PlayersTeam = NULL;
    this->HeatingElementMaterial = NULL;
    this->DamageData = NULL;
    this->DamageData_SmallDamage = NULL;
    this->BurstFlameAudio1 = NULL;
    this->BurstFlameAudio2 = NULL;
    this->BurstFlameAudio3 = NULL;
    this->BurstFlameAudio4 = NULL;
    this->PreheatAudioSmall1 = NULL;
    this->PreheatAudioSmall2 = NULL;
    this->PreheatAudioSmall3 = NULL;
    this->PreheatAudioSmall4 = NULL;
    this->PreheatAudioBig1 = NULL;
    this->PreheatAudioBig2 = NULL;
    this->PreheatAudioBig3 = NULL;
    this->PreheatAudioBig4 = NULL;
    this->BurstFlameAudioGain = 0.00f;
    this->BurstFlamesAudioRadius = 50.00f;
    this->BurstFlamesAudioRadiusRingMultiplier = 1.00f;
    this->SceneRootComp = NULL;
    this->WarmupTime = 1.50f;
    this->WarmUpDelayWhenAllWarmUpDone = 2.00f;
    this->RotationFloorDoneTime = 4.00f;
    this->FloorRotationTimeBetweenSector = 2.00f;
    this->AnticipationTimeOneRing = 2.00f;
    this->AnticipationTime = 8.00f;
    this->AnticipationTimeRotationPattern = 3.00f;
    this->BurstinitialOffset = 1700.00f;
    this->BurstOffsetPerRing = 500.00f;
    this->RingPatternInterval = 2.00f;
    this->HeatingPipeEmissiveInterval = 0.10f;
    this->EmissiveStrengthOverTime = NULL;
    this->EmissiveStrengthOverTimeFadeOut = NULL;
    this->AgonizerRef = NULL;
    this->AudioComponent1 = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AudioComponent1"));
    this->AudioComponent2 = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AudioComponent2"));
    this->AudioComponent3 = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AudioComponent3"));
    this->AudioComponent4 = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AudioComponent4"));
}

