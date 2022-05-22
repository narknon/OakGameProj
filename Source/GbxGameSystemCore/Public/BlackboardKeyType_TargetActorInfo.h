#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BlackboardKeyType_TargetActorInfo.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UBlackboardKeyType_TargetActorInfo : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UBlackboardKeyType_TargetActorInfo();
};

