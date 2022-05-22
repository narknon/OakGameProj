#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_ActionAtPoint.generated.h"

class UAIAction_ActionAtPoint;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_ActionAtPoint : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_ActionAtPoint* Action;
    
    UBTTask_AIAction_ActionAtPoint();
};

