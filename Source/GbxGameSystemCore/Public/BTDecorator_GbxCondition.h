#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_GbxCondition.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UBTDecorator_GbxCondition : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
public:
    UBTDecorator_GbxCondition();
};

