#pragma once
#include "CoreMinimal.h"
#include "LightProjectile.h"
#include "OakLightProjectileInitializationData.h"
#include "OakLightProjectile.generated.h"

class UOakLightProjectileData;

UCLASS()
class UOakLightProjectile : public ULightProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float BaseStatusEffectChance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BaseStatusEffectDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BaseStatusEffectDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float StatusEffectChanceScalar;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float StatusEffectDamageScalar;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float StatusEffectDurationScalar;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UOakLightProjectileData* OakData;
    
public:
    UOakLightProjectile();
    UFUNCTION(BlueprintPure)
    void InitOakChildData(FOakLightProjectileInitializationData& InitData) const;
    
};

