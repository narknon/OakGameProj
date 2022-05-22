#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Cooldown.h"
#include "AIAspect_Cooldown.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NotPlaceable)
class GBXAI_API UAIAspect_Cooldown : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Cooldown Settings;
    
    UAIAspect_Cooldown();
};

