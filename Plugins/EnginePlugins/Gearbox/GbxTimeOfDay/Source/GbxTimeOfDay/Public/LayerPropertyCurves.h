#pragma once
#include "CoreMinimal.h"
#include "FloatPropertyLayerCurve.h"
#include "VectorPropertyLayerCurve.h"
#include "ColorPropertyLayerCurve.h"
#include "Vector4PropertyLayerCurve.h"
#include "LayerPropertyCurves.generated.h"

USTRUCT(BlueprintType)
struct FLayerPropertyCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFloatPropertyLayerCurve> FloatProps;
    
    UPROPERTY()
    TArray<FVectorPropertyLayerCurve> VectorProps;
    
    UPROPERTY()
    TArray<FColorPropertyLayerCurve> ColorProps;
    
    UPROPERTY()
    TArray<FVector4PropertyLayerCurve> Vector4Props;
    
    GBXTIMEOFDAY_API FLayerPropertyCurves();
};

