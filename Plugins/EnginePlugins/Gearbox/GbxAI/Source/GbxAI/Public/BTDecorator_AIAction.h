#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_AIAction.generated.h"

UCLASS(Const, EditInlineNew, NotPlaceable)
class GBXAI_API UBTDecorator_AIAction : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_AIAction();
};

