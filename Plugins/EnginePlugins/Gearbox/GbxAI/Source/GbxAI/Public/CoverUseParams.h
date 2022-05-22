#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "CoverUseParams.generated.h"

USTRUCT(BlueprintType)
struct FCoverUseParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bMustHaveViewToTarget;
    
    UPROPERTY(EditAnywhere)
    bool bMustBeHiddenFromThreats;
    
    UPROPERTY(EditAnywhere)
    float InCoverExposurePercent;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideIdleTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdleTimeOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFireTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam FireTimeOverride;
    
    GBXAI_API FCoverUseParams();
};

