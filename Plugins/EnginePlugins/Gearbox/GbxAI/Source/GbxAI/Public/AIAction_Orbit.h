#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAspectSettings_Orbit.h"
#include "AIAction_Orbit.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Orbit : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Orbit OrbitSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation RotationSettings;
    
    UAIAction_Orbit();
};

