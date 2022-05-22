#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "FloatParamLayerCurve.generated.h"

USTRUCT(BlueprintType)
struct FFloatParamLayerCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParamName;
    
    UPROPERTY()
    FRichCurve ValueCurve;
    
    GBXTIMEOFDAY_API FFloatParamLayerCurve();
};

