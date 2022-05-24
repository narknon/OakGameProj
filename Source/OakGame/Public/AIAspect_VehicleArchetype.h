#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_VehicleArchetype.h"
#include "AIAspect_VehicleArchetype.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleArchetype : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleArchetype Settings;
    
    UAIAspect_VehicleArchetype();
};

