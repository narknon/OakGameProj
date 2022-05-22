#include "InventoryBalanceStateInitializationData.h"

FInventoryBalanceStateInitializationData::FInventoryBalanceStateInitializationData() {
    this->GameStage = 0;
    this->InventoryData = NULL;
    this->InventoryBalanceData = NULL;
    this->ManufacturerData = NULL;
    this->ReRollCount = 0;
    this->bDroppedFromAI = false;
}

