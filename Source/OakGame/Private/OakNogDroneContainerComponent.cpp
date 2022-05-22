#include "OakNogDroneContainerComponent.h"
#include "Templates/SubclassOf.h"

class AOakDroneProjectile;
class AActor;

void UOakNogDroneContainerComponent::ToggleDroneBone(int32 DroneIndex, bool bToggleOn, bool bInstant) {
}

void UOakNogDroneContainerComponent::ToggleDrone(int32 DroneIndex, bool bToggleOn, bool bInstant) {
}

void UOakNogDroneContainerComponent::ToggleAllDrones(bool bToggleOn, bool bInstant) {
}

void UOakNogDroneContainerComponent::StopReplenishingDrones() {
}

void UOakNogDroneContainerComponent::ReplenishDrones(int32 TotalNeeded, float DelayBetweenSpawn, bool bInstant, const FString& DroneListOverrideCSV) {
}

void UOakNogDroneContainerComponent::KillDrone(int32 DroneIndex) {
}

void UOakNogDroneContainerComponent::KillAllDrones(bool bScatterDrones) {
}

bool UOakNogDroneContainerComponent::IsDroneEnabled(int32 DroneIndex) const {
    return false;
}

FTransform UOakNogDroneContainerComponent::GetDroneTransform(int32 DroneIndex) const {
    return FTransform{};
}

FName UOakNogDroneContainerComponent::GetDroneName(int32 DroneIndex) const {
    return NAME_None;
}

int32 UOakNogDroneContainerComponent::FindDroneIndexByBoneName(FName BoneName) const {
    return 0;
}

void UOakNogDroneContainerComponent::DroneInitialization() {
}

void UOakNogDroneContainerComponent::DeployRandomDrones(int32 DroneCount, TSubclassOf<AOakDroneProjectile> DroneClass, AActor* Target) {
}

void UOakNogDroneContainerComponent::DeployRandomDrone(TSubclassOf<AOakDroneProjectile> DroneClass, AActor* Target) {
}

void UOakNogDroneContainerComponent::DeployDrone(int32 DroneIndex, TSubclassOf<AOakDroneProjectile> DroneClass, AActor* Target) {
}

void UOakNogDroneContainerComponent::ApplyDamageToDrones(float Damage, FVector HitLocation) {
}

void UOakNogDroneContainerComponent::ApplyDamageToDrone(int32 DroneIndex, float Damage) {
}

UOakNogDroneContainerComponent::UOakNogDroneContainerComponent() {
    this->DroneDigistructTime = 0.25f;
    this->DroneHealthPercentOfNog = 0.10f;
    this->bDronesDieOnHealthDepleted = true;
    this->DroneReplenishThreshold = 8;
    this->DroneReplenishMin = 12;
    this->DroneDeathFX = NULL;
    this->DroneScatterCount = 6;
    this->ScatterDroneClass = NULL;
    this->HealDroneClass = NULL;
    this->DefendDroneClass = NULL;
    this->AttackDroneClass = NULL;
    this->DroneAliveCount = 0;
    this->Nog = NULL;
}

