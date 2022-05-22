#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Condition.h"
#include "AIAspectSettings_AIGroupCondition.h"
#include "AIAspect_AIGroupCondition.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_AIGroupCondition : public UAIAspect_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_AIGroupCondition GroupSettings;
    
    UAIAspect_AIGroupCondition();
};

