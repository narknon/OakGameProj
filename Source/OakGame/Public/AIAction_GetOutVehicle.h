#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAction_GetOutVehicle.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_GetOutVehicle : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInstantDetach;
    
    UAIAction_GetOutVehicle();
};

