#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "GbxBehaviorTreeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UGbxBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UGbxBehaviorTreeComponent();
};

