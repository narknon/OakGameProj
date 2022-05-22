#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PlayGbxAction.generated.h"

class UBehaviorTreeComponent;
class UGbxAction;
class UGbxActionComponent;

UCLASS(EditInlineNew)
class UBTTask_PlayGbxAction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionClassToPlay;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* CachedActionComponent;
    
    UPROPERTY(Export, Transient)
    UBehaviorTreeComponent* CachedBTComponent;
    
    UBTTask_PlayGbxAction();
};

