#include "NavAnimMachineData.h"

FNavAnimMachineData::FNavAnimMachineData() {
    this->MachineIdx = 0;
    this->ServerBaseState = ENavAnimState::None;
    this->CurrState = ENavAnimState::None;
}

