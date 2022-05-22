#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_ZeroRotation.h"
#include "AIAspect.h"
#include "AIAspect_ZeroRotation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_ZeroRotation : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_ZeroRotation Settings;
    
    UAIAspect_ZeroRotation();
};

