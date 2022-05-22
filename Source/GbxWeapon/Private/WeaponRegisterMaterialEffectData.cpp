#include "WeaponRegisterMaterialEffectData.h"

FWeaponRegisterMaterialEffectData::FWeaponRegisterMaterialEffectData() {
    this->Type = EWET_Default;
    this->ID = 0;
    this->Visibility = EWAVT_Both;
    this->UseModeBitmask = 0;
    this->Slot = 0;
    this->BlendMode = EWeaponMaterialEffectBlendMode::Multiply;
    this->bPlayOnlyOnActiveSlot = false;
    this->bLoop = false;
    this->bApplyAttribute = false;
    this->bScaleAttributeByValueOverTime = false;
    this->bScaleAttributeByDeltaTime = false;
    this->ValueOverTime = NULL;
    this->Impulse = 0.00f;
    this->DecayRate = 0.00f;
    this->MaxValue = 0.00f;
}

