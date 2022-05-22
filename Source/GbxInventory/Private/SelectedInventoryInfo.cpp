#include "SelectedInventoryInfo.h"

FSelectedInventoryInfo::FSelectedInventoryInfo() {
    this->InventoryData = NULL;
    this->InventoryBalanceData = NULL;
    this->ManufacturerData = NULL;
    this->GameStage = 0;
    this->bCompileUIStats = false;
    this->bDroppedFromAI = false;
}

