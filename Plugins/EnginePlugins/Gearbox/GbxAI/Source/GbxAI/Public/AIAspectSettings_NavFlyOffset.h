#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "AIAspectSettings_NavFlyOffset.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_NavFlyOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector CenterKey;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Distance;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Height;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    bool bLimitSearchRadius;
    
    UPROPERTY(EditAnywhere)
    float UpdatePeriod;
    
    UPROPERTY(EditAnywhere)
    float bForward;
    
    GBXAI_API FAIAspectSettings_NavFlyOffset();
};

