#include "OakCinematicModeData.h"

UOakCinematicModeData::UOakCinematicModeData() {
    this->bAffectsInputAbilities = true;
    this->bAffectsStatusMenu = true;
    this->bAffectsQuickMenu = true;
    this->bClearMenus = true;
    this->bRestrictWeapons = false;
    this->bReapCorpses = false;
    this->bHideDroppedPickups = false;
    this->bAffectsWeaponActions = true;
    this->AffectsWeaponActions = -1;
    this->OverrideHUDState = NULL;
    this->bEnableVOIPIcons = true;
    this->bAffectsPlayerMovement = false;
}

