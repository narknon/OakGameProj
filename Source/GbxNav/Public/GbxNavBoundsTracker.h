#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavBoundsTracker.generated.h"

class UPrimitiveComponent;

USTRUCT()
struct FGbxNavBoundsTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBox Bounds;
    
    UPROPERTY(Export)
    UPrimitiveComponent* PrimitiveComponent;
    
    UPROPERTY()
    TArray<FVector> HullPoints;
    
    GBXNAV_API FGbxNavBoundsTracker();
};

