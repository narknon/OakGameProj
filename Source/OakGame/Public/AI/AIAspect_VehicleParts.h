#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_VehicleParts.h"
#include "AIAspect_VehicleParts.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleParts : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleParts Settings;
    
    UAIAspect_VehicleParts();
};

