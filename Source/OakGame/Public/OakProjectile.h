#pragma once
#include "CoreMinimal.h"
#include "CauseDamageStatusEffectOverrides.h"
#include "OakElementalEffectBucketProviderInterface.h"
#include "Projectile.h"
#include "NameplateInfoProviderInterface.h"
#include "EOakElementalStackBucketType.h"
#include "Engine/EngineTypes.h"
#include "OakProjectile.generated.h"

class UTargetableComponent;
class UDamageComponent;
class UBalanceStateComponent;

UCLASS()
class AOakProjectile : public AProjectile, public IOakElementalEffectBucketProviderInterface, public INameplateInfoProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIgnoreCollisionWithInstigatorAndChildrens;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsGrenade;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressSpawnModifierEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCauseDamageStatusEffectOverrides StatusEffectOverrides;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBalanceStateComponent* BalanceComponent;
    
    UPROPERTY(EditDefaultsOnly)
    EOakElementalStackBucketType ElementalEffectBucketType;
    
public:
    UPROPERTY(EditAnywhere)
    bool bRegisterAsTargetable;
    
    UPROPERTY(EditAnywhere)
    bool bShouldDisplayNameplate;
    
protected:
    UPROPERTY(Export)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export)
    UTargetableComponent* TargetableComponent;
    
public:
    AOakProjectile();
    UFUNCTION(BlueprintCallable)
    void SetIsGrenade(bool bNewIsGrenade);
    
    UFUNCTION()
    void OnSkagProjectileStop(const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintPure)
    UBalanceStateComponent* GetBalanceComponent();
    
    
    // Fix for true pure virtual functions not being implemented
};

