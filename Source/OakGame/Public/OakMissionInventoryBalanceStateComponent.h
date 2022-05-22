#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "OakMissionInventoryBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakMissionInventoryBalanceStateComponent : public UOakInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
    UOakMissionInventoryBalanceStateComponent();
};

