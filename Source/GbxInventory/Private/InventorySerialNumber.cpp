#include "InventorySerialNumber.h"

FInventorySerialNumber::FInventorySerialNumber() {
    this->State = EInventorySerialNumberState::Empty;
    this->RunningCounter = 0;
}

