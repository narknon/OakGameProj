#include "ShieldAugment_Absorb.h"

UShieldAugment_Absorb::UShieldAugment_Absorb() {
    this->AbsorbSound = NULL;
    this->AbsorbParticles = NULL;
    this->ParticleAttachSocket = TEXT("Muzzle");
    this->LoadedWeaponAmmoAttribute = NULL;
    this->WeaponMaxAmmoAttribute = NULL;
    this->WeaponSlot = NULL;
    this->ShieldAbsorbChanceAttribute = NULL;
    this->AbsorbStat = NULL;
    this->bUseRestoreData = false;
}

