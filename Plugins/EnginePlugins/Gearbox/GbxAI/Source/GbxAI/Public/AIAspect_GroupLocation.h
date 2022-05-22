#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_GroupLocation.h"
#include "AIAspect.h"
#include "AIAspect_GroupLocation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_GroupLocation : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GroupLocation Settings;
    
    UAIAspect_GroupLocation();
};

