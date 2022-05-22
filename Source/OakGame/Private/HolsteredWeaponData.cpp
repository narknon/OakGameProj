#include "HolsteredWeaponData.h"

FHolsteredWeaponData::FHolsteredWeaponData() {
    this->WeaponSizeType = EWeaponHolsteredSizeType::Small;
    this->AttachMode = EPickupLootAttachmentMode::Origin;
    this->bVisibleInFirstPerson = false;
}

