#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_VehicleDriverLeaves.h"
#include "AIAspect_VehicleDriverLeaves.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleDriverLeaves : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleDriverLeaves Settings;
    
    UAIAspect_VehicleDriverLeaves();
};

