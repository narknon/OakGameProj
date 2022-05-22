#pragma once
#include "CoreMinimal.h"
#include "PropertyLayerCurveBase.h"
#include "Curves/RichCurve.h"
#include "ColorPropertyLayerCurve.generated.h"

USTRUCT(BlueprintType)
struct FColorPropertyLayerCurve : public FPropertyLayerCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve ValueCurve[4];
    
    GBXTIMEOFDAY_API FColorPropertyLayerCurve();
};

