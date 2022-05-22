#pragma once
#include "CoreMinimal.h"
#include "LargeLiquidBodySurfaceSectionClippingVolume.h"
#include "LargeLiquidBodySurfaceSection.generated.h"

USTRUCT(BlueprintType)
struct FLargeLiquidBodySurfaceSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    float WorldZ;
    
    UPROPERTY()
    TArray<FLargeLiquidBodySurfaceSectionClippingVolume> ClippingVolumes;
    
    OAKGAME_API FLargeLiquidBodySurfaceSection();
};

