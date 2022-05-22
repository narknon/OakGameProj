#include "LightProjectileData.h"
#include "LightProjectile.h"









void ULightProjectileData::GetTimedEventNameList(TArray<FName>& FuncList) const {
}

ULightProjectileData::ULightProjectileData() {
    this->ProjectileClass = ULightProjectile::StaticClass();
    this->BodyMesh = NULL;
    this->MaxTracerThrottleLevel = ELightProjectileTracerThrottleLevel::LocalPlayer;
    this->TracerFX = NULL;
    this->TracerFXCollection = NULL;
    this->ImpactData = NULL;
    this->bPlayImpactEffectOnExplode = false;
    this->ExplosionData = NULL;
    this->DamageInstigatorFeedback = NULL;
    this->AttachedFX = NULL;
    this->AttachedFXCollection = NULL;
    this->BounceEffectDelay = 0.10f;
    this->Speed = 13000.00f;
    this->MaxSpeed = 0.00f;
    this->Acceleration = 0.00f;
    this->GravityScale = 0.00f;
    this->Friction = 0.00f;
    this->RicochetFriction = 0.00f;
    this->BounceFriction = 0.00f;
    this->Bounciness = 1.00f;
    this->LifeTime = 1.00f;
    this->bAttachedLifetimeEnabled = false;
    this->AttachedLifetime = 5.00f;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->TraceInterval = 0.20f;
    this->CollisionRadius = 0.00f;
    this->MaxRicochet = 0;
    this->MaxBounces = 0;
    this->MaxReflections = 1;
    this->ProxyRadius = 0.00f;
    this->ProxyTraceChannel = ECC_GameTraceChannel3;
    this->bIgnoreCollisionWithInstigator = true;
    this->bSetTeamCollision = true;
    this->bIgnoreCollisionWithInstigatorTeam = false;
    this->bPenetratesTargetables = false;
    this->bPenetratesWorld = false;
    this->bBounceOffTargetables = false;
    this->bCollideWithSource = false;
    this->bEnableProxyCollisionEvents = false;
    this->CollideWithSourceDelay = 0.00f;
    this->bCanTriggerBulletDodges = true;
    this->bTargetedImpactRadiusDamage = true;
    this->DamageSource = NULL;
    this->DamageAreaData = NULL;
    this->DamageData = NULL;
    this->DamageAreaHitOffset = 5.00f;
    this->bDamageFalloff = false;
    this->bRequiresInstigatorToDoDamage = true;
    this->AttachDamageScale = 0.00f;
    this->AttachedSound = NULL;
    this->bCanAttachToTargetables = false;
    this->bCanAttachToFriendlies = false;
    this->bCanAttachToWorld = false;
    this->bHideBodyOnAttach = false;
    this->bDeactivateTracerFXOnAttach = false;
    this->bEnableHomingOnSpawn = true;
    this->bOverrideAimAssistSettings = false;
    this->MaxMagnetismDeflection = 4.00f;
    this->bMakeProjectileRing = false;
    this->bCallOnDamageEventOncePerHit = true;
}

