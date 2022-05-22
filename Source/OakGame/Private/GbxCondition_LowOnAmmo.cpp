#include "GbxCondition_LowOnAmmo.h"

UGbxCondition_LowOnAmmo::UGbxCondition_LowOnAmmo() {
    this->AmmoResource = NULL;
    this->bLoadedAmmo = true;
    this->bUsePercent = false;
    this->LowAmmoPercent = 0.10f;
}

