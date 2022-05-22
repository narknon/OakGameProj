#pragma once
#include "CoreMinimal.h"
#include "FloatParamLayerCurve.h"
#include "VectorParamLayerCurve.h"
#include "LayerParameterCurves.generated.h"

USTRUCT(BlueprintType)
struct FLayerParameterCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFloatParamLayerCurve> FloatParams;
    
    UPROPERTY()
    TArray<FVectorParamLayerCurve> VectorParams;
    
    GBXTIMEOFDAY_API FLayerParameterCurves();
};

