#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightProjectileParticlePoolData.h"
#include "LightProjectileManager.generated.h"

class ULightProjectile;
class UParticleSystemComponent;

UCLASS(DefaultConfig, NotPlaceable)
class GBXWEAPON_API ALightProjectileManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ULightProjectile*> ActiveProjectiles;
    
    UPROPERTY(Transient)
    TArray<ULightProjectile*> ProjectilesWaitingBatch;
    
    UPROPERTY(Transient)
    TArray<ULightProjectile*> ProjectilePool;
    
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> ActiveParticles;
    
    UPROPERTY(Transient)
    TArray<FLightProjectileParticlePoolData> ParticlesPool;
    
    UPROPERTY(GlobalConfig)
    float MaxAsyncSpawnTime;
    
public:
    ALightProjectileManager();
protected:
    UFUNCTION(Client, Reliable)
    void ServerSendDebugProjectileImpact(int32 ProjSyncID, AActor* HitActor, FName BoneName, uint16 ProjFlags);
    
private:
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
};

