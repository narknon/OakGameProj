#include "CARConsoleAnimInstance.h"

UCARConsoleAnimInstance::UCARConsoleAnimInstance() {
    this->NearRadiusOfPlayer = 500.00f;
    this->LastStatus = ECARStatus::Locked;
    this->Status = ECARStatus::Locked;
    this->bIsLocked = false;
    this->bIsUnfolding = false;
    this->bIsActive = false;
    this->bIsInactive = false;
}

