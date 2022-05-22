#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_Orbit.h"
#include "AIAspect_Orbit.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_Orbit : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Orbit OrbitSettings;
    
    UAIAspect_Orbit();
};

