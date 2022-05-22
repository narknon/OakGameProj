#pragma once
#include "CoreMinimal.h"
#include "AIAspect_GbxAction.h"
#include "AIAspect_TakeOff.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_TakeOff : public UAIAspect_GbxAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float NearFlightDistance;
    
public:
    UAIAspect_TakeOff();
};

