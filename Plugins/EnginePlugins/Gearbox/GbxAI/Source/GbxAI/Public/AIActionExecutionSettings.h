#pragma once
#include "CoreMinimal.h"
#include "EAIActionResultTransition.h"
#include "AIActionExecutionSettings.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIActionExecutionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    EAIActionResultTransition SuccessTransition;
    
    UPROPERTY(EditAnywhere)
    EAIActionResultTransition FailureTransition;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysReportSuccess;
    
    UPROPERTY(EditAnywhere)
    float CheckCanStartPeriod;
    
    FAIActionExecutionSettings();
};

