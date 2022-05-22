#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavSectionBounds.generated.h"

USTRUCT()
struct GBXNAV_API FGbxNavSectionBounds {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBox WorldBoxBound;
    
    UPROPERTY()
    TArray<FVector> WorldConvexHullPoints;
    
    UPROPERTY()
    FGuid DominationGuid;
    
    FGbxNavSectionBounds();
};

