#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECurveOverrideType -FallbackName=ECurveOverrideType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NormalizeCurvesOverride -FallbackName=NormalizeCurvesOverride
#include "BoneWeightCurveOverride.generated.h"

USTRUCT(BlueprintType)
struct FBoneWeightCurveOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECurveOverrideType CurveOverrideType;
    
    UPROPERTY()
    FNormalizeCurvesOverride NormalizeCurveOverrideData;
    
    UPROPERTY()
    FName SingleOverrideCurveName;
    
    UPROPERTY()
    TArray<int32> CacheWeightIndicesToUpdate;
    
    GBXANIMRUNTIME_API FBoneWeightCurveOverride();
};

