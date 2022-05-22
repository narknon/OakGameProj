#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_TimedCondition.h"
#include "AIAspect_TimedCondition.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_TimedCondition : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_TimedCondition Settings;
    
    UAIAspect_TimedCondition();
};

