#include "TedioreProjectile.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "WwiseAudioComponent.h"
#include "SocketComponent.h"
#include "GbxProjectileMovementComponent.h"

class UParticleSystemComponent;
class UParticleSystem;
class UDrunkenBaseMovementComponent;
class AWeapon;
class UGrenadeHomingComponent;
class ATedioreProjectile;
class UTedioreBehavior;

void ATedioreProjectile::TurnAttachedTrailOn(bool bRestartTrail) {
}

void ATedioreProjectile::SetAttachedTrail(UParticleSystem* NewTrail) {
}

void ATedioreProjectile::RemoveAttachedTrail(bool bDestroyTrail) {
}

void ATedioreProjectile::OnRep_OnProjectileStuck() {
}

void ATedioreProjectile::OnProjectileLastBounce(const FHitResult& ImpactResult) {
}

void ATedioreProjectile::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}


void ATedioreProjectile::K2_SpawnTedioreProjectile(AWeapon* TedioreWeapon, TSubclassOf<ATedioreProjectile> TedioreClass) {
}

bool ATedioreProjectile::IsMirvChild() const {
    return false;
}

UGrenadeHomingComponent* ATedioreProjectile::GetHomingComponent() {
    return NULL;
}

UDrunkenBaseMovementComponent* ATedioreProjectile::GetDrunkenComponent() {
    return NULL;
}

UParticleSystemComponent* ATedioreProjectile::GetAttachedTrail() const {
    return NULL;
}

UTedioreBehavior* ATedioreProjectile::FindBehaviorByClass(TSubclassOf<UTedioreBehavior> BehaviorClass, EBehaviorOutput& Branches, bool bCheckChildClasses) const {
    return NULL;
}

float ATedioreProjectile::CalculateExplosionDamage_Implementation(float DamagePerShot, int32 BulletsPerShot) const {
    return 0.0f;
}

void ATedioreProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATedioreProjectile, bIsMirvChild);
    DOREPLIFETIME(ATedioreProjectile, bIsStuck);
}

ATedioreProjectile::ATedioreProjectile() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->RotatingComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotating Component"));
    this->WwiseComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("Audio Component"));
    this->FireMuzzleComponent = CreateDefaultSubobject<USocketComponent>(TEXT("Fire Muzzle"));
    this->AttachedTrail = NULL;
    this->OwningWeapon = NULL;
    this->TedioreProjectileMovement = CreateDefaultSubobject<UGbxProjectileMovementComponent>(TEXT("Projectile Movement Component"));
    this->HomingComponent = NULL;
    this->DrunkenComponent = NULL;
    this->CachedWeaponFireAudio = NULL;
    this->AmmoCount = 0;
    this->AmmoUsed = 0;
    this->ProjectilesPerShot = 0;
    this->ShotAmmoCost = 0;
    this->ShotDamage = 0.00f;
    this->FireRate = 0.00f;
    this->ImpactTriggerDuration = 0.00f;
    this->bRotateWhenThrown = true;
    this->MuzzleSocketName = TEXT("Muzzle");
    this->LaserSightSocketName = TEXT("FX_LaserSight");
    this->bHasMirved = false;
    this->bIsMirvChild = false;
    this->MirvBaseDamage = 0.00f;
    this->bIgnoreWeaponVisualCloning = false;
    this->NumMirvProjectileAttribute = NULL;
    this->MaxAssistAngle = 0.00f;
    this->AssistAngleDot = 0.00f;
    this->bIsStuck = false;
}

