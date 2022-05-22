#include "WeaponMaterialEffectData.h"

FWeaponMaterialEffectData::FWeaponMaterialEffectData() {
    this->Visibility = EWAVT_Both;
    this->BlendMode = EWeaponMaterialEffectBlendMode::Multiply;
    this->bPlayOnlyOnActiveSlot = false;
    this->bLoop = false;
    this->bApplyAttribute = false;
    this->bScaleAttributeByValueOverTime = false;
    this->bScaleAttributeByDeltaTime = false;
    this->ValueOverTime = NULL;
    this->Impulse = 0.00f;
    this->Duration = 0.00f;
    this->DecayRate = 0.00f;
    this->MaxValue = 0.00f;
}

