#include "WeaponBonusAspectData.h"

class UWeaponBonusDataTableData;

void UWeaponBonusAspectData::EnumerateDataTableRowNames(UWeaponBonusDataTableData* WeaponBonusDataTable, TArray<FName>& OutRowNames) const {
}

void UWeaponBonusAspectData::EnumerateDataTableColumnNames(UWeaponBonusDataTableData* WeaponBonusDataTable, TArray<FString>& OutColumnNames) const {
}

void UWeaponBonusAspectData::EnumerateDataTableColumnCollections(UWeaponBonusDataTableData* WeaponBonusDataTable, TArray<FName>& OutColumnCollections) const {
}

void UWeaponBonusAspectData::EnumerateBonuses(TArray<FName>& OutBonuses) const {
}

UWeaponBonusAspectData::UWeaponBonusAspectData() {
    this->bInitializationBonus = false;
    this->BonusCollection = NULL;
}

