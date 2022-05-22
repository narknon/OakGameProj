#pragma once
#include "CoreMinimal.h"
#include "LightProjectileParticlePoolData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FLightProjectileParticlePoolData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* PSC;
    
    GBXWEAPON_API FLightProjectileParticlePoolData();
};

