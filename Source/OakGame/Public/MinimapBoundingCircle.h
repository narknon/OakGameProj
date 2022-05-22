#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MinimapBoundingCircle.generated.h"

USTRUCT(BlueprintType)
struct FMinimapBoundingCircle {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector2D CenterPoint;
    
    OAKGAME_API FMinimapBoundingCircle();
};

