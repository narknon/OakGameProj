#pragma once
#include "CoreMinimal.h"
#include "AIAspectExecutionSettings.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectExecutionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanPreventActionFromStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanCauseActionToSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanForceActionToSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanCauseActionToFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMustFinish;
    
    GBXAI_API FAIAspectExecutionSettings();
};

