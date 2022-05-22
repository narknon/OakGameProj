#include "OperativeStandInActionAbility.h"

FOperativeStandInActionAbility::FOperativeStandInActionAbility() {
    this->CharacterFlourishAnimation = NULL;
    this->AuxiliaryActor = NULL;
    this->AuxiliaryScale = 0.00f;
    this->AuxiliaryFlourishAnimation = NULL;
    this->AuxiliaryIdleAnimation = NULL;
    this->bAttachAuxiliaryActorToCharacter = false;
    this->bCopyPlayerAnims = false;
    this->bCopyPlayerWeapon = false;
    this->FadeInFlourishVisibleDelay = 0.00f;
}

