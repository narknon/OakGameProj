#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimCurveTypes.h"
#include "DistanceMatchingInfo.generated.h"

USTRUCT()
struct FDistanceMatchingInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FFloatCurve> DistanceCurveMap;
    
    GBXGAMESYSTEMCORE_API FDistanceMatchingInfo();
};

