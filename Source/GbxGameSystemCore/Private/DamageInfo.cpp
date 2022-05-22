#include "DamageInfo.h"

FDamageInfo::FDamageInfo() {
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->DamageRadius = 0.00f;
    this->ImpactForce = 0.00f;
    this->InstigatorFeedback = NULL;
    this->DamageModifierComponent = NULL;
    this->DamageCauser = NULL;
    this->bApplyCriticalHitModsToAoEDamage = false;
}

