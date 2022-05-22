#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "OakDestructibleFXManager.generated.h"

UCLASS(NotPlaceable, Transient)
class OAKDESTRUCTION_API AOakDestructibleFXManager : public AActor {
    GENERATED_BODY()
public:
    AOakDestructibleFXManager();
protected:
    UFUNCTION()
    void OnDestructibleDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void DestroyAllDestructibles();
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void ClientApplyRadiusDamage(uint32 SyncID, float DamageAmount, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    
    UFUNCTION(NetMulticast, Unreliable)
    void ClientApplyDamage(uint32 SyncID, float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);
    
};

