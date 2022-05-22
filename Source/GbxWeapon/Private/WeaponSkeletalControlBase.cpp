#include "WeaponSkeletalControlBase.h"

UWeaponSkeletalControlBase::UWeaponSkeletalControlBase() {
    this->bAlwaysUpdate = false;
    this->bUpdateWhenAmmoChanges = false;
    this->bStartPaused = false;
    this->bSyncToFireRate = false;
    this->bAddInputOnUse = false;
    this->MinFireRate = 0.00f;
    this->MaxFireRate = 0.00f;
    this->UseModeContextBitmask = 0;
    this->ReceivedInputSound = NULL;
    this->bAttachToBone = false;
    this->bUseDefaultAudioComponent = true;
}

