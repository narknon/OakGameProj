#pragma once
#include "CoreMinimal.h"
#include "LightBeamParticlePoolData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FLightBeamParticlePoolData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* PSC;
    
    GBXWEAPON_API FLightBeamParticlePoolData();
};

