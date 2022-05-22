#include "AgonizerFloor.h"
#include "Components/SceneComponent.h"

class AAgonizer9k;

void AAgonizerFloor::StopHeatingPipeEmissive(FFloorSectorRing& SectorRing) {
}

void AAgonizerFloor::StopDamageFeedbackRing(FFloorSector& FloorSector, FFloorSectorRing& SectorRing) {
}

void AAgonizerFloor::StartSafeSpotPattern(float DelayBeforeStart) {
}

void AAgonizerFloor::StartRotationPattern(float DelayBeforeStart) {
}

void AAgonizerFloor::StartRingPattern(float DelayBeforeStart) {
}

void AAgonizerFloor::StartHeatingPipeEmissive(FFloorSectorRing& SectorRing) {
}

void AAgonizerFloor::StartAnticipationSafeSpot_Implementation(int32 SafeSpotSectorId) {
}

void AAgonizerFloor::SetFloorRotationParameters_Implementation(int32 Direction, int32 StartingSectorId) {
}

void AAgonizerFloor::SetAgonizerRef(AAgonizer9k* AgonizerRef) {
}

void AAgonizerFloor::PlayBurstFlameAudio() {
}

void AAgonizerFloor::OnWarmUpDone(FFloorSector& FloorSector) {
}

void AAgonizerFloor::OnRotationAnticipationDone(FFloorSector& FloorSector, bool IsLast) {
}

void AAgonizerFloor::OnDamageFeedbackDone() {
}

void AAgonizerFloor::OnAnticipationOneRingDone(FFloorSector& FloorSector, FFloorSectorRing& SectorRing) {
}

void AAgonizerFloor::OnAnticipationDone() {
}

AAgonizerFloor::AAgonizerFloor() {
    this->FireHeat = NULL;
    this->WarmUp = NULL;
    this->BurstFlameRing1 = NULL;
    this->BurstFlameRing2 = NULL;
    this->BurstFlameRing3 = NULL;
    this->BurstFlameRing4 = NULL;
    this->MeshCollisionRing02 = NULL;
    this->MeshCollisionRing03 = NULL;
    this->MeshCollisionRing04 = NULL;
    this->MeshCollisionRing05 = NULL;
    this->FakeEmmisiveRing02 = NULL;
    this->FakeEmmisiveRing03 = NULL;
    this->FakeEmmisiveRing04 = NULL;
    this->FakeEmmisiveRing05 = NULL;
    this->HeatingElementmeshRing02 = NULL;
    this->HeatingElementmeshRing03 = NULL;
    this->HeatingElementmeshRing04 = NULL;
    this->HeatingElementmeshRing05 = NULL;
    this->HeatingElementMaterial = NULL;
    this->FakeEmmisiveAllRings = NULL;
    this->DamageData = NULL;
    this->DamageTypeFire = NULL;
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
    this->SceneRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->WarmupTime = 1.50f;
    this->WarmUpDelayWhenAllWarmUpDone = 2.00f;
    this->RotationFloorDoneTime = 4.00f;
    this->FloorRotationTimeBetweenSector = 2.00f;
    this->AnticipationTimeOneRing = 2.00f;
    this->AnticipationTime = 8.00f;
    this->AnticipationTimeRotationPattern = 3.00f;
    this->DamageOverlapTime = 0.50f;
    this->BurstinitialOffset = 1700.00f;
    this->BurstOffsetPerRing = 500.00f;
    this->FloorFireDamage = 700.00f;
    this->RingPatternInterval = 2.00f;
    this->HeatingPipeEmissiveInterval = 0.10f;
    this->EmissiveStrengthOverTime = NULL;
    this->EmissiveStrengthOverTimeFadeOut = NULL;
    this->bDisplayDebugCollisionZones = false;
}

