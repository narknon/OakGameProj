#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Orbit.h"
#include "AIAspectSettings_Sweep.h"
#include "AIAspect_Sweep.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_Sweep : public UAIAspect_Orbit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAIAspectSettings_Sweep SweepSettings;
    
    UAIAspect_Sweep();
};

