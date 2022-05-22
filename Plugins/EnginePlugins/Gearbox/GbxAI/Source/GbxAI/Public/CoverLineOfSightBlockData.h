#pragma once
#include "CoreMinimal.h"
#include "CoverLineOfSightBlockData.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FCoverLineOfSightBlockData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Distance;
    
    FCoverLineOfSightBlockData();
};

