#include "InventoryData_Simple.h"
#include "InventoryBalanceStateComponent.h"

UInventoryData_Simple::UInventoryData_Simple() {
    this->InventoryBalanceStateClass = UInventoryBalanceStateComponent::StaticClass();
    this->ManufacturerData = NULL;
    this->RarityData = NULL;
    this->BalanceData = NULL;
}

