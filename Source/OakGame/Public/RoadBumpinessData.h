#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "RoadBumpinessData.generated.h"

USTRUCT(BlueprintType)
struct FRoadBumpinessData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(EditAnywhere)
    float Bumpiness;
    
    OAKGAME_API FRoadBumpinessData();
};

