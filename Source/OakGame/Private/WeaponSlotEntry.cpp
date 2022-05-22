#include "WeaponSlotEntry.h"

FWeaponSlotEntry::FWeaponSlotEntry() {
    this->SlotData = NULL;
    this->AttachedWeapon = NULL;
    this->PendingAttachedWeapon = NULL;
    this->ClientPredictedPendingAttachedWeapon = NULL;
    this->RestoreSlotData = NULL;
}

