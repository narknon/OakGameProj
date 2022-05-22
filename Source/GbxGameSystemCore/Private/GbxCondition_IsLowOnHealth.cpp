#include "GbxCondition_IsLowOnHealth.h"

UGbxCondition_IsLowOnHealth::UGbxCondition_IsLowOnHealth() {
    this->LowHealth = 0.25f;
    this->bEvaluateOnContextOwner = false;
}

