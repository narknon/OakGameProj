#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIAction.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAction_LeapOnVehicle.generated.h"

class UOakAction_LeapOnVehicle;

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_LeapOnVehicle : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UOakAction_LeapOnVehicle> LeapAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLeapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLeapOnHostile;
    
    UAIAction_LeapOnVehicle();
};

