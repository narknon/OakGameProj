#pragma once
#include "CoreMinimal.h"
#include "PropertyLayerCurveBase.generated.h"

USTRUCT()
struct FPropertyLayerCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ClassName;
    
    UPROPERTY()
    FName PropertyName;
    
    GBXTIMEOFDAY_API FPropertyLayerCurveBase();
};

