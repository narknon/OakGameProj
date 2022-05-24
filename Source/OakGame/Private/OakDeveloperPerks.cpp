#include "OakDeveloperPerks.h"

class UItemPoolData;
class UGbxInventoryCategoryData;
class UEnum;
class AOakPlayerController;

void UOakDeveloperPerks::UnlockWeaponTrinkets() const {
}

void UOakDeveloperPerks::UnlockWeaponSkins() const {
}

void UOakDeveloperPerks::UnlockVehicleParts() const {
}

void UOakDeveloperPerks::UnlockCustomizations() const {
}

void UOakDeveloperPerks::SpawnItems(const TArray<UItemPoolData*>& ItemPools, int32 NumItems) {
}

void UOakDeveloperPerks::ServerUnlockVehicleParts_Implementation() const {
}
bool UOakDeveloperPerks::ServerUnlockVehicleParts_Validate() {
    return true;
}

void UOakDeveloperPerks::ServerSpawnItems_Implementation(const TArray<UItemPoolData*>& ItemPools, int32 NumItems) {
}
bool UOakDeveloperPerks::ServerSpawnItems_Validate(const TArray<UItemPoolData*>& ItemPools, int32 NumItems) {
    return true;
}

void UOakDeveloperPerks::ServerLoaded_Implementation() const {
}
bool UOakDeveloperPerks::ServerLoaded_Validate() {
    return true;
}

void UOakDeveloperPerks::ServerKillAllEnemies_Implementation() const {
}
bool UOakDeveloperPerks::ServerKillAllEnemies_Validate() {
    return true;
}

void UOakDeveloperPerks::ServerGrantLevels_Implementation(uint8 NumLevels) const {
}
bool UOakDeveloperPerks::ServerGrantLevels_Validate(uint8 NumLevels) {
    return true;
}

void UOakDeveloperPerks::ServerGiveCurrency_Implementation(UGbxInventoryCategoryData* CurrencyType, int32 Amount) const {
}
bool UOakDeveloperPerks::ServerGiveCurrency_Validate(UGbxInventoryCategoryData* CurrencyType, int32 Amount) {
    return true;
}

UEnum* UOakDeveloperPerks::PerkTypeEnumFunc() {
    return NULL;
}


void UOakDeveloperPerks::Loaded() const {
}

void UOakDeveloperPerks::KillAllEnemies() const {
}

void UOakDeveloperPerks::GrantLevels(uint8 NumLevels) const {
}

void UOakDeveloperPerks::GiveCurrency(UGbxInventoryCategoryData* CurrencyType, int32 Amount) const {
}

AOakPlayerController* UOakDeveloperPerks::GetOwnerOakPlayerController() const {
    return NULL;
}

UOakDeveloperPerks::UOakDeveloperPerks() {
    this->PerkTypeEnum = NULL;
}

