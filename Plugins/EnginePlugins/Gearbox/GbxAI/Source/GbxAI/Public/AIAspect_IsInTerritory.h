#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_IsInTerritory.h"
#include "AIAspect_IsInTerritory.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_IsInTerritory : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_IsInTerritory Settings;
    
    UAIAspect_IsInTerritory();
};

