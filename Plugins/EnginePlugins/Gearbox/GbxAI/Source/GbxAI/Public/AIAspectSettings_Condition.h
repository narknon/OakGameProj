#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_ConditionData.h"
#include "AIAspectSettings_Condition.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_ConditionData CanStartCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_ConditionData SucceedCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_ConditionData FailCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_ConditionData CanAbortCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCanStartCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSucceedCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFailCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCanAbortCondition;
    
    FAIAspectSettings_Condition();
};

