#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "CauseDamageContextSourceInterface.h"
#include "GenericTeamAgentInterface.h"
#include "DamageInfo.h"
#include "EWeaponShotModifierType.h"
#include "AttributeInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "ForceSelection.h"
#include "CriticalHitDamageOverrides.h"
#include "Engine/EngineTypes.h"
#include "Projectile.generated.h"

class UImpactData;
class UExplosionComponent;
class UGbxDamageType;
class UGbxProjectileMovementComponent;
class UDamageData;
class UTeam;
class UDamageSource;
class UExplosionData;
class USceneComponent;
class AWeapon;

UCLASS()
class GBXWEAPON_API AProjectile : public AActor, public ICauseDamageContextSourceInterface, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIgnoreCollisionWithInstigator: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIgnoreCollisionWithInstigatorTeam: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bStopBlockingPawnsAfterCollidingWithOne: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bServerControlsProjectileLifetime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FDamageInfo DamageInfo;
    
    UPROPERTY(EditAnywhere)
    UImpactData* DefaultImpact;
    
    UPROPERTY(EditAnywhere)
    float DefaultImpactEffectDelay;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SpawnModifierType)
    EWeaponShotModifierType SpawnModifierType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float SpawnModifierValue;
    
protected:
    UPROPERTY(Export, Transient)
    UGbxProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(Export)
    UExplosionComponent* ExplosionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClientExplodeAtLeastOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplodeOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplodeOnHitWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplodeOnHitDamagable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplodeOnHitEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplodeAfterLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDestroyAfterExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDamageOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY()
    UTeam* ProjectileTeam;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageSource> DamageSourceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UExplosionData* ExplosionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseQuickPopExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UExplosionData* QuickPopExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData DamageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DamageAreaBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FForceSelection ImpactForceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCriticalHitDamageOverrides CriticalHitOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> OverrideIgnoreActors;
    
protected:
    UPROPERTY(Transient)
    AWeapon* WeaponFiredFrom;
    
    UPROPERTY(Replicated, Transient)
    float SpawnSpeedScale;
    
public:
    AProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopBlockingPawns();
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileDamageType(TSubclassOf<UGbxDamageType> DamageType);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileDamageSource(TSubclassOf<UDamageSource> DamageSource);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileDamageRadius(float DamageRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileDamage(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollisionWith(AActor* ActorToCollide);
    
protected:
    UFUNCTION()
    void OnRep_SpawnModifierType();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLastBounce(const FHitResult& ImpactResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitWorld(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitNeutral(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitFriendly(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitEnemy(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitDamagableObject(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExplode();
    
public:
    UFUNCTION()
    void OnComponentDetachedFromParent(USceneComponent* SceneComponent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBounce(const FHitResult& Hit, const FVector ImpactVelocity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginExplode();
    
public:
    UFUNCTION(BlueprintCallable)
    void IgnoreCollisionWith(AActor* ActorToIgnore);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleDetachRequest();
    
    UFUNCTION(BlueprintCallable)
    UGbxProjectileMovementComponent* GetProjectileMovementComponent();
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGbxDamageType> GetProjectileDamageType();
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UDamageSource> GetProjectileDamageSource();
    
    UFUNCTION(BlueprintPure)
    float GetProjectileDamageRadius();
    
    UFUNCTION(BlueprintPure)
    float GetProjectileDamage();
    
    UFUNCTION(BlueprintCallable)
    UExplosionComponent* GetExplosionComponent();
    
    UFUNCTION(BlueprintCallable)
    void Explode();
    
    UFUNCTION()
    void CheckProjectileAttachment();
    
    UFUNCTION()
    void BounceDelegate(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    
    // Fix for true pure virtual functions not being implemented
};

