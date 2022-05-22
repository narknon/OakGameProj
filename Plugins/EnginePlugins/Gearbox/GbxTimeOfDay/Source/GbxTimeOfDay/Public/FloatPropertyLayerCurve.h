#pragma once
#include "CoreMinimal.h"
#include "PropertyLayerCurveBase.h"
#include "Curves/RichCurve.h"
#include "FloatPropertyLayerCurve.generated.h"

USTRUCT(BlueprintType)
struct FFloatPropertyLayerCurve : public FPropertyLayerCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve ValueCurve;
    
    GBXTIMEOFDAY_API FFloatPropertyLayerCurve();
};

