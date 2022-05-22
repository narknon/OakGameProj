#pragma once
#include "CoreMinimal.h"
#include "PropertyLayerCurveBase.h"
#include "Curves/RichCurve.h"
#include "VectorPropertyLayerCurve.generated.h"

USTRUCT(BlueprintType)
struct FVectorPropertyLayerCurve : public FPropertyLayerCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve ValueCurve[4];
    
    GBXTIMEOFDAY_API FVectorPropertyLayerCurve();
};

