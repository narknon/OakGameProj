#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_MoveNode.generated.h"

class UAIAction_MoveNode;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_MoveNode : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_MoveNode* Action;
    
    UBTTask_AIAction_MoveNode();
};

