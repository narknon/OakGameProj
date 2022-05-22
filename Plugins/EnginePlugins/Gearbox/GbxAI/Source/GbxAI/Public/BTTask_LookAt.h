#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_LookAt.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_LookAt : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float AngleThresholdDegrees;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetActorKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TurnSpeedKey;
    
public:
    UBTTask_LookAt();
};

