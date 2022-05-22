#include "InventoryBalanceData.h"
#include "InventoryBalanceStateComponent.h"

UInventoryBalanceData::UInventoryBalanceData() {
    this->InventoryBalanceStateClass = UInventoryBalanceStateComponent::StaticClass();
    this->BaseBalanceData = NULL;
    this->InventoryData = NULL;
    this->RarityData = NULL;
    this->bIsGearBuildable = true;
    this->GearBuilderCategory = NULL;
    this->MaxNumPrefixes = 2;
    this->DlcInventorySetData = NULL;
    this->bMigratedToActorPartSelectionData = false;
    this->bDisableVisibilityAndCollision = true;
}

