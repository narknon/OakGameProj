#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_GoToPoint.generated.h"

class UAIAction_GoToPoint;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_GoToPoint : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_GoToPoint* Action;
    
    UBTTask_AIAction_GoToPoint();
};

