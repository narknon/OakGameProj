#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_Custom.generated.h"

class UAIAction;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_Custom : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UAIAction* Action;
    
    UBTTask_AIAction_Custom();
};

