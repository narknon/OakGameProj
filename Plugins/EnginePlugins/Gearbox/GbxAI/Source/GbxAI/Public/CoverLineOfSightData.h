#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoverLineOfSightSectionData.h"
#include "UObject/NoExportTypes.h"
#include "CoverLineOfSightParams.h"
#include "CoverLineOfSightData.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FCoverLineOfSightData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform LocalToWorld;
    
    UPROPERTY()
    FMatrix WorldToLocal;
    
    UPROPERTY()
    TArray<FCoverLineOfSightSectionData> Sections;
    
    UPROPERTY()
    FCoverLineOfSightParams Params;
    
    FCoverLineOfSightData();
};

