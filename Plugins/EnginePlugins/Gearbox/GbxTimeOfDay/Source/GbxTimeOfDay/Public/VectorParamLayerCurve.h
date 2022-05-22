#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "VectorParamLayerCurve.generated.h"

USTRUCT(BlueprintType)
struct FVectorParamLayerCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParamName;
    
    UPROPERTY()
    FRichCurve ValueCurve[4];
    
    GBXTIMEOFDAY_API FVectorParamLayerCurve();
};

