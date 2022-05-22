#pragma once
#include "CoreMinimal.h"
#include "CoverLineOfSightBlockData.h"
#include "CoverLineOfSightSectionData.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FCoverLineOfSightSectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCoverLineOfSightBlockData> Blocks;
    
    FCoverLineOfSightSectionData();
};

