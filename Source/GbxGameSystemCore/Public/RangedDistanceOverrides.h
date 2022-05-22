#pragma once
#include "CoreMinimal.h"
#include "RangedDistanceOverrides.generated.h"

USTRUCT(BlueprintType)
struct FRangedDistanceOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideRangedDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceOverride;
    
    GBXGAMESYSTEMCORE_API FRangedDistanceOverrides();
};

