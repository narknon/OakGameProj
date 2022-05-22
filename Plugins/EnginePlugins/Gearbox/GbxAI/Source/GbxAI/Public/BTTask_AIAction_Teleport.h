#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_Teleport.generated.h"

class UAIAction_Teleport;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_Teleport : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_Teleport* Action;
    
    UBTTask_AIAction_Teleport();
};

