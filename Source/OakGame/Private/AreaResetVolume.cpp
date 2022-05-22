#include "AreaResetVolume.h"

void AAreaResetVolume::SetEnabled(bool bEnabled) {
}

void AAreaResetVolume::ResetAreaIfEmpty() {
}

AAreaResetVolume::AAreaResetVolume() {
    this->bIsEnabled = false;
    this->bDisableOnReset = true;
}

