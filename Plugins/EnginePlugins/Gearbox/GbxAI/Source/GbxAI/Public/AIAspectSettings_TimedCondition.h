#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_ConditionData.h"
#include "GbxParam.h"
#include "EAIActionResultDirective.h"
#include "EAIActionResult.h"
#include "AIAspectSettings_TimedCondition.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_TimedCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_ConditionData Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIActionResultDirective WhenConditionFails;
    
    UPROPERTY()
    EAIActionResult FalseResult;
    
    FAIAspectSettings_TimedCondition();
};

