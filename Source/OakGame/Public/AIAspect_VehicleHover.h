#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspect_VehicleHover.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleHover : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTrackTarget;
    
    UAIAspect_VehicleHover();
};

