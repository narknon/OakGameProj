#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_LeadRoute.generated.h"

class UAIAction_LeadRoute;

UCLASS(EditInlineNew)
class UBTTask_AIAction_LeadRoute : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_LeadRoute* Action;
    
    UBTTask_AIAction_LeadRoute();
};

