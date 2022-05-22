#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_UseSmartObject.generated.h"

class UAIAction_UseSmartObject;

UCLASS(EditInlineNew)
class UBTTask_AIAction_UseSmartObject : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_UseSmartObject* Action;
    
    UBTTask_AIAction_UseSmartObject();
};

