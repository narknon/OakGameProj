#pragma once
#include "CoreMinimal.h"
#include "PropertyLayerCurveBase.h"
#include "Curves/RichCurve.h"
#include "Vector4PropertyLayerCurve.generated.h"

USTRUCT(BlueprintType)
struct FVector4PropertyLayerCurve : public FPropertyLayerCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve ValueCurve[4];
    
    GBXTIMEOFDAY_API FVector4PropertyLayerCurve();
};

