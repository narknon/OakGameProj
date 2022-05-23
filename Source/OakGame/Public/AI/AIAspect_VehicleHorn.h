#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_VehicleHorn.h"
#include "AIAspect.h"
#include "AIAspect_VehicleHorn.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleHorn : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleHorn Settings;
    
    UAIAspect_VehicleHorn();
};

