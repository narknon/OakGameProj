#include "WeaponAttachState.h"

FWeaponAttachState::FWeaponAttachState() {
    this->NetworkID = 0;
    this->Slot = 0;
    this->Instigator = NULL;
    this->EquipType = EWeaponEquipType::Default;
    this->PutDownType = EWeaponPutDownType::Default;
}

