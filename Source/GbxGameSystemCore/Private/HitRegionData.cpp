#include "HitRegionData.h"

UHitRegionData::UHitRegionData() {
    this->bCanEverTakeRadiusDamage = true;
    this->bCriticalHit = false;
    this->bAllowRadiusDamage = false;
    this->bShouldBlockAreaDamage = false;
    this->bAllowRadiusDamageToBeConvertedToImpactDamage = true;
    this->bTrackDamage = true;
    this->bUseDamageScale = false;
    this->bShowDamageNumbers = true;
    this->bCanReflect = false;
    this->ReflectionChance = 1.00f;
    this->bCanRicochet = false;
    this->RicochetChance = 1.00f;
    this->bRicochetIfReflectionFails = true;
    this->bOnlyReflectToAttacker = false;
    this->ReflectionAccuracyModifier = 5.00f;
    this->IncomingReflectedDamageScale = 1.00f;
    this->OutgoingReflectedDamageScale = 1.00f;
    this->bDisableBulletMagnetism = false;
    this->bOverrideImpactEffect = false;
    this->bPlayImactEffectWithNoDamage = true;
    this->bNoSplatterEffect = false;
    this->SplatterEffect = NULL;
    this->CustomDamageNumberParticleSystem = NULL;
    this->bDisableHitReactions = false;
    this->PhysicalMaterial = NULL;
    this->DefaultDamageSurface = EDamageSurfaceType::Default;
}

