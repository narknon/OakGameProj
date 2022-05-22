#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_TimeLimit.h"
#include "AIAspect_TimeLimit.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NotPlaceable)
class GBXAI_API UAIAspect_TimeLimit : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_TimeLimit Settings;
    
    UAIAspect_TimeLimit();
};

