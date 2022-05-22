#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "TedioreBehavior.generated.h"

class ATedioreProjectile;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTedioreBehavior : public UObject {
    GENERATED_BODY()
public:
    UTedioreBehavior();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileLastBounce(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileInitialized(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileImpact(ATedioreProjectile* Projectile, const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileFireWeapon(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileExplode(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileEndPlay(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileBounce(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnProjectileBeginPlay(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnLastBounceEvent(ATedioreProjectile* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnInitializedEvent(ATedioreProjectile* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnImpactEvent(ATedioreProjectile* Projectile, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnFireWeaponEvent(ATedioreProjectile* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnExplodeEvent(ATedioreProjectile* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEndPlayEvent(ATedioreProjectile* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBounceEvent(ATedioreProjectile* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBeginPlayEvent(ATedioreProjectile* Projectile);
    
};

