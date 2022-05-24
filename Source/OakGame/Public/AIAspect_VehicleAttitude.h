#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_VehicleAttitude.h"
#include "AIAspect.h"
#include "AIAspect_VehicleAttitude.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleAttitude : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleAttitude Settings;
    
    UAIAspect_VehicleAttitude();
};

