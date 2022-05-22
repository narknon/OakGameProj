#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_PlayGbxAction.generated.h"

class UAIAction_PlayGbxAction;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_PlayGbxAction : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_PlayGbxAction* Action;
    
    UBTTask_AIAction_PlayGbxAction();
};

