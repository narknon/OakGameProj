#include "LightProjectileInitializationData.h"

FLightProjectileInitializationData::FLightProjectileInitializationData() {
    this->DataBlueprint = NULL;
    this->Flags = 0;
    this->Instigator = NULL;
    this->Source = NULL;
    this->Target = NULL;
    this->Damage = 0.00f;
    this->DamageCauser = NULL;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->DamageRadius = 0.00f;
    this->ImpactDataOverride = NULL;
    this->SpeedScale = 0.00f;
    this->GravityScaleOverride = 0.00f;
    this->FiringPatternID = 0;
    this->FireSocketID = 0;
    this->DamageModifierComp = NULL;
    this->ModifierType = EWeaponShotModifierType::None;
    this->ModifierValue = 0.00f;
}

