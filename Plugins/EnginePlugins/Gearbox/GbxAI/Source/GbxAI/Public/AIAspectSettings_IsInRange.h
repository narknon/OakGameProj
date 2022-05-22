#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EIsInRangeAspectDistanceTest.h"
#include "AIAspectSettings_IsInRangeData.h"
#include "AIAspectIsInRangeAdvancedData.h"
#include "AIAspectSettings_IsInRange.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_IsInRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIsInRangeAspectDistanceTest DistanceTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_IsInRangeData CanRunRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectIsInRangeAdvancedData AdvancedRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAdvancedRanges;
    
    FAIAspectSettings_IsInRange();
};

