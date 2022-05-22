#pragma once
#include "CoreMinimal.h"
#include "AIAction_Orbit.h"
#include "AIAspectSettings_Sweep.h"
#include "AIAction_Sweep.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Sweep : public UAIAction_Orbit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAIAspectSettings_Sweep SweepSettings;
    
    UAIAction_Sweep();
};

