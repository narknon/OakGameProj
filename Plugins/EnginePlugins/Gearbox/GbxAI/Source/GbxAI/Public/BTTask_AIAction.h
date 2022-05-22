#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AIAction.generated.h"

class UBTDecorator_AIAction;

UCLASS(Abstract, EditInlineNew)
class GBXAI_API UBTTask_AIAction : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBTDecorator_AIAction* ActionDecorator;
    
public:
    UBTTask_AIAction();
};

