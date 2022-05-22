#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_IsInRangeData.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_IsInRangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertRange;
    
    FAIAspectSettings_IsInRangeData();
};

