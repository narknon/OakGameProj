#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Condition.h"
#include "AIAspectSettings_ConditionData.h"
#include "AIAspect_Condition.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Condition : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Condition Settings;
    
    UAIAspect_Condition();
    UFUNCTION()
    static FString GetConditionDataDescription(const FAIAspectSettings_ConditionData& ConditionData);
    
};

