#include "LightBeamInitializationData.h"

FLightBeamInitializationData::FLightBeamInitializationData() {
    this->DataBlueprint = NULL;
    this->Flags = 0;
    this->Instigator = NULL;
    this->DamageCauser = NULL;
    this->Damage = 0.00f;
    this->DamageIntervalOverride = 0.00f;
    this->DamageRampCurve = NULL;
    this->DamageRampScale = 0.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->DamageRadius = 0.00f;
    this->ImpactDataOverride = NULL;
    this->Spread = 0.00f;
    this->LifetimeOverride = 0.00f;
    this->ModifierType = EWeaponShotModifierType::None;
    this->ModifierValue = 0.00f;
    this->ParentBeam = NULL;
}

