#include "GbxCondition_SensedRecently.h"

UGbxCondition_SensedRecently::UGbxCondition_SensedRecently() {
    this->Senses.AddDefaulted(1);
    this->bAnyTarget = false;
}

