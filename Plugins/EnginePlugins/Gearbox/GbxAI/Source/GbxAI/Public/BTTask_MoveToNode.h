#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTask_MoveToNode.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_MoveToNode : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UBTTask_MoveToNode();
};

