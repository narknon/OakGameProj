#include "Projectile.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USceneComponent;
class UGbxDamageType;
class UGbxProjectileMovementComponent;
class UDamageSource;
class AActor;
class UExplosionComponent;

void AProjectile::StopBlockingPawns() {
}

void AProjectile::SetProjectileDamageType(TSubclassOf<UGbxDamageType> DamageType) {
}

void AProjectile::SetProjectileDamageSource(TSubclassOf<UDamageSource> DamageSource) {
}

void AProjectile::SetProjectileDamageRadius(float DamageRadius) {
}

void AProjectile::SetProjectileDamage(float Damage) {
}

void AProjectile::ResetCollisionWith(AActor* ActorToCollide) {
}

void AProjectile::OnRep_SpawnModifierType() {
}








void AProjectile::OnComponentDetachedFromParent(USceneComponent* SceneComponent) {
}



void AProjectile::IgnoreCollisionWith(AActor* ActorToIgnore) {
}

void AProjectile::HandleDetachRequest_Implementation() {
}

UGbxProjectileMovementComponent* AProjectile::GetProjectileMovementComponent() {
    return NULL;
}

TSubclassOf<UGbxDamageType> AProjectile::GetProjectileDamageType() {
    return NULL;
}

TSubclassOf<UDamageSource> AProjectile::GetProjectileDamageSource() {
    return NULL;
}

float AProjectile::GetProjectileDamageRadius() {
    return 0.0f;
}

float AProjectile::GetProjectileDamage() {
    return 0.0f;
}

UExplosionComponent* AProjectile::GetExplosionComponent() {
    return NULL;
}

void AProjectile::Explode() {
}

void AProjectile::CheckProjectileAttachment() {
}

void AProjectile::BounceDelegate(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectile, DamageInfo);
    DOREPLIFETIME(AProjectile, SpawnModifierType);
    DOREPLIFETIME(AProjectile, SpawnModifierValue);
    DOREPLIFETIME(AProjectile, SpawnSpeedScale);
}

AProjectile::AProjectile() {
    this->bIgnoreCollisionWithInstigator = true;
    this->bIgnoreCollisionWithInstigatorTeam = false;
    this->bStopBlockingPawnsAfterCollidingWithOne = false;
    this->bServerControlsProjectileLifetime = false;
    this->DefaultImpact = NULL;
    this->DefaultImpactEffectDelay = 0.10f;
    this->SpawnModifierType = EWeaponShotModifierType::None;
    this->SpawnModifierValue = 1.00f;
    this->MovementComponent = NULL;
    this->ExplosionComponent = NULL;
    this->bClientExplodeAtLeastOnce = false;
    this->bExplodeOnHit = false;
    this->bExplodeOnHitWorld = false;
    this->bExplodeOnHitDamagable = false;
    this->bExplodeOnHitEnemy = false;
    this->bExplodeAfterLifetime = false;
    this->bDestroyAfterExplode = false;
    this->bDamageOnExplode = false;
    this->DamageData = NULL;
    this->ProjectileTeam = NULL;
    this->DamageSourceOverride = NULL;
    this->DamageTypeOverride = NULL;
    this->ExplosionData = NULL;
    this->bUseQuickPopExplosion = false;
    this->QuickPopExplosion = NULL;
    this->ImpactData = NULL;
    this->DamageAreaRadius = 0.00f;
    this->WeaponFiredFrom = NULL;
    this->SpawnSpeedScale = 1.00f;
}

