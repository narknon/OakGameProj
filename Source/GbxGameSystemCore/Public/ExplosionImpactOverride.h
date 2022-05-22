#pragma once
#include "CoreMinimal.h"
#include "ExplosionImpactOverride.generated.h"

class UMaterialInterface;

USTRUCT()
struct FExplosionImpactOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* DecalOverride;
    
    GBXGAMESYSTEMCORE_API FExplosionImpactOverride();
};

