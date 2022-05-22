#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Plan.h"
#include "AIAspect_Plan.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NotPlaceable)
class GBXAI_API UAIAspect_Plan : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Plan Settings;
    
    UAIAspect_Plan();
};

