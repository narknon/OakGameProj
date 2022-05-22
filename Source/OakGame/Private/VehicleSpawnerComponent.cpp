#include "VehicleSpawnerComponent.h"

class AOakSpawner;
class UWorld;
class UObject;
class UInventoryData;
class AOakVehicle;
class UInventoryPartData;
class ACatchARide;
class AActor;
class UOakCARVehicleData;
class UOakCARVehiclePartData;

void UVehicleSpawnerComponent::UnlockVehicleForAllPlayers(UObject* WorldContextObject, TSoftObjectPtr<UInventoryData> Vehicle) {
}

void UVehicleSpawnerComponent::UnlockVehicleAndPartForAllPlayer(AOakVehicle* Vehicle) {
}

void UVehicleSpawnerComponent::UnlockPartForAllPlayers(UObject* WorldContextObject, TSoftObjectPtr<UInventoryPartData> Part) {
}

void UVehicleSpawnerComponent::SpawnMissionVehicle(ACatchARide* Console) {
}

void UVehicleSpawnerComponent::SetMissionVehicle(UWorld* World, AOakSpawner* MissionSpawner) {
}

void UVehicleSpawnerComponent::ServerUpdateLoadoutAtIndex_Implementation(int32 Index, const FOakCARMenuVehicleConfig& NewLoadout) {
}
bool UVehicleSpawnerComponent::ServerUpdateLoadoutAtIndex_Validate(int32 Index, const FOakCARMenuVehicleConfig& NewLoadout) {
    return true;
}

void UVehicleSpawnerComponent::ServerUpdateLastUsedVehicleLoadoutIndex_Implementation(int32 NewIndex) {
}
bool UVehicleSpawnerComponent::ServerUpdateLastUsedVehicleLoadoutIndex_Validate(int32 NewIndex) {
    return true;
}

void UVehicleSpawnerComponent::RequestVehicleSpawnCallback() {
}

void UVehicleSpawnerComponent::RequestVehicleSpawn(AActor* PreviousVehicle) {
}

bool UVehicleSpawnerComponent::IsVehicleUnlocked(TSoftObjectPtr<UInventoryData> Vehicle) const {
    return false;
}

bool UVehicleSpawnerComponent::IsPartUnlocked(TSoftObjectPtr<UInventoryPartData> Part) const {
    return false;
}

bool UVehicleSpawnerComponent::IsMissionVehicleCanBeSpawn(ACatchARide* CatchRideStation) {
    return false;
}

void UVehicleSpawnerComponent::GetVehicleUnlocked(TArray<UOakCARVehicleData*>& Vehicles) const {
}

UOakCARVehicleData* UVehicleSpawnerComponent::GetVehicleType(AOakVehicle* Vehicle) {
    return NULL;
}

void UVehicleSpawnerComponent::GetVehiclePartUnlocked(UOakCARVehicleData* Vehicle, ECARPartType PartType, TArray<UOakCARVehiclePartData*>& Parts) const {
}

UOakCARVehiclePartData* UVehicleSpawnerComponent::GetVehiclePartByType(AOakVehicle* Vehicle, ECARPartType Type) {
    return NULL;
}

bool UVehicleSpawnerComponent::GetVehicleLoadoutAtIndex(int32 VehicleLoadoutindex, FOakCARMenuVehicleConfig& OutLoadout) {
    return false;
}

int32 UVehicleSpawnerComponent::GetTotalNumVehicles() const {
    return 0;
}

int32 UVehicleSpawnerComponent::GetTotalNumParts(UOakCARVehicleData* Vehicle, ECARPartType PartType) const {
    return 0;
}

void UVehicleSpawnerComponent::GetNewlyUnlockedVehicles(TArray<UOakCARVehicleData*>& Vehicles) const {
}

AOakVehicle* UVehicleSpawnerComponent::GetLastVehicleSpawn() const {
    return NULL;
}

UVehicleSpawnerComponent::UVehicleSpawnerComponent() {
    this->WheelsUnlocked.AddDefaulted(1);
    this->PartsUnlocked.AddDefaulted(32);
    this->LastUsedVehicleLoadoutIndex = -1;
    this->SpawnInventoryData = NULL;
    this->SpawnInventoryBalanceData = NULL;
    this->LastVehicleSpawn = NULL;
}

