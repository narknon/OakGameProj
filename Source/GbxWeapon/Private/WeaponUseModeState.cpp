#include "WeaponUseModeState.h"

FWeaponUseModeState::FWeaponUseModeState() {
    this->InputChannels = 0;
    this->PrimaryInputChannel = 0;
    this->bReloadNeeded = false;
    this->UseComponent = NULL;
    this->AmmoComponent = NULL;
    this->ReloadComponent = NULL;
    this->ZoomComponent = NULL;
    this->AudioProviderComponent = NULL;
    this->DamageModifierComponent = NULL;
}

