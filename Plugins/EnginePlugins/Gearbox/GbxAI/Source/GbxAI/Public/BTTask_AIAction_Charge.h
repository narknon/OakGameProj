#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_Charge.generated.h"

class UAIAction_Charge;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_Charge : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_Charge* Action;
    
    UBTTask_AIAction_Charge();
};

