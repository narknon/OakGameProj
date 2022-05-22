#include "ReplicatedLightProjectileInitializationData.h"

FReplicatedLightProjectileInitializationData::FReplicatedLightProjectileInitializationData() {
    this->CreationID = 0;
    this->DataBlueprint = NULL;
    this->Instigator = NULL;
    this->Source = NULL;
    this->Target = NULL;
    this->DamageCauser = NULL;
    this->ImpactDataOverride = NULL;
    this->SpeedScale = 0.00f;
    this->GravityScaleOverride = 0.00f;
    this->Flags = 0;
    this->ModifierType = EWeaponShotModifierType::None;
    this->FiringPatternID = 0;
    this->FireSocketID = 0;
    this->RandomSeed = 0;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->DamageRadius = 0.00f;
    this->ImpactForce = 0.00f;
    this->ModifierValue = 0.00f;
    this->TracerFXOverride = NULL;
    this->BulletByAdditiveLayer = NULL;
}

