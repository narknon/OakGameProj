#include "MayhemModeState.h"

FMayhemModeState::FMayhemModeState() {
    this->bIsActive = false;
    this->MayhemLevel = 0;
    this->PendingMayhemLevel = 0;
    this->PendingRandomSeed = 0;
    this->RandomSeed = 0;
}

