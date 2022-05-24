#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakProjectile.h"
#include "Engine/EngineTypes.h"
#include "GrenadeHealingProjectile.generated.h"

class UGbxDamageType;
class USphereComponent;
class AActor;
class UWwiseAudioComponent;
class UProjectileHomingComponent;
class UParticleSystem;
class UDamageData;
class UHealthTypeData;
class UWwiseEvent;
class UPrimitiveComponent;

UCLASS()
class OAKGAME_API AGrenadeHealingProjectile : public AOakProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UProjectileHomingComponent* HomingComponent;
    
    UPROPERTY(Export)
    USphereComponent* SphereComponent;
    
    UPROPERTY()
    TSubclassOf<UDamageData> HealingDamageData;
    
    UPROPERTY()
    TSubclassOf<UGbxDamageType> HealingDamageType;
    
    UPROPERTY()
    float DamagePercent;
    
    UPROPERTY()
    UHealthTypeData* TriggeringHealthType;
    
    UPROPERTY(Replicated)
    UParticleSystem* HealingParticles;
    
    UPROPERTY(Export, Replicated)
    UWwiseAudioComponent* AudioComponent;
    
    UPROPERTY(Replicated)
    UWwiseEvent* PersistantAudioEvent;
    
    UPROPERTY(Replicated)
    UWwiseEvent* HealingAudioEvent;
    
public:
    AGrenadeHealingProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnOverlapActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION()
    void HealHomingTarget();
    
};

