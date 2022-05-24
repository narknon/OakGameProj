#pragma once
#include "CoreMinimal.h"
#include "EUIStatComparisonResult.h"
#include "GFxItemInspectionPartStat.generated.h"

USTRUCT()
struct OAKGAME_API FGFxItemInspectionPartStat {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    EUIStatComparisonResult CompareResult;
    
    FGFxItemInspectionPartStat();
};

