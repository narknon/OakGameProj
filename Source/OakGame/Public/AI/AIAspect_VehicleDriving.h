#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_VehicleDriving.h"
#include "AIAspect.h"
#include "AIAspect_VehicleDriving.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleDriving : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleDriving Settings;
    
    UAIAspect_VehicleDriving();
};

