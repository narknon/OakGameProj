#include "NavAnimTransition.h"

FNavAnimTransition::FNavAnimTransition() {
    this->State = ENavAnimState::None;
    this->MachineIdx = 0;
    this->RunIdx = 0;
}

