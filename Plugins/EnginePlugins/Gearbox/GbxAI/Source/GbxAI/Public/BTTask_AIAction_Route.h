#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_Route.generated.h"

class UAIAction_Route;

UCLASS(EditInlineNew)
class UBTTask_AIAction_Route : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_Route* Action;
    
    UBTTask_AIAction_Route();
};

