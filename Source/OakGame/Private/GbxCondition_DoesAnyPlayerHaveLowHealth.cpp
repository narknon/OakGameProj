#include "GbxCondition_DoesAnyPlayerHaveLowHealth.h"

UGbxCondition_DoesAnyPlayerHaveLowHealth::UGbxCondition_DoesAnyPlayerHaveLowHealth() {
    this->bIncludeLowHealth = true;
    this->bIncludeVeryLowHealth = true;
    this->bAccountForReservedHealth = false;
}

