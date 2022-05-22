#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_Loop.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Loop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam LoopCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLoopCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam LoopDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLoopDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreFailure;
    
    FAIAspectSettings_Loop();
};

