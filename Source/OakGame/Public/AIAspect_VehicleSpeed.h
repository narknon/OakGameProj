#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_VehicleSpeed.h"
#include "AIAspect_VehicleSpeed.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleSpeed : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleSpeed Settings;
    
    UAIAspect_VehicleSpeed();
};

