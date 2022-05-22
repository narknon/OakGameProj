#include "WeaponRegisterAttachmentEffectData.h"

FWeaponRegisterAttachmentEffectData::FWeaponRegisterAttachmentEffectData() {
    this->Type = EWET_Default;
    this->Effect = NULL;
    this->ConditionalEffect = NULL;
    this->ID = 0;
    this->Visibility = EWAVT_Both;
    this->UseModeBitmask = 0;
    this->Slot = 0;
    this->Flags = 0;
    this->RelativeScale = 0.00f;
    this->AutoActivateModeBitmask = 0;
    this->bPlayOnlyOnActiveSlot = false;
    this->bAutoActivate = false;
    this->bIgnoredByFXCoordinator = false;
    this->bHideWhenScoped = false;
}

