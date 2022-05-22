#include "InventorySlotEntry.h"

FInventorySlotEntry::FInventorySlotEntry() {
    this->EquippedInventory = NULL;
    this->Enabled = false;
    this->Selected = false;
    this->SlotData = NULL;
    this->EquippedTrinket = NULL;
    this->ClientCachedEquippedInventory = NULL;
    this->ClientCachedEquippedTrinket = NULL;
}

