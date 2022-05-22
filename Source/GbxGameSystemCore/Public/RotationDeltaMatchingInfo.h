#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimCurveTypes.h"
#include "RotationDeltaMatchingInfo.generated.h"

USTRUCT(BlueprintType)
struct FRotationDeltaMatchingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FFloatCurve RotationTimeCurve;
    
    GBXGAMESYSTEMCORE_API FRotationDeltaMatchingInfo();
};

