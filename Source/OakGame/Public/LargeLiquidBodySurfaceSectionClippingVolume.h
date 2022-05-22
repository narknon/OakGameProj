#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LargeLiquidBodySurfaceSectionClippingVolume.generated.h"

USTRUCT(BlueprintType)
struct FLargeLiquidBodySurfaceSectionClippingVolume {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPlane> ClippingPlanes;
    
    OAKGAME_API FLargeLiquidBodySurfaceSectionClippingVolume();
};

