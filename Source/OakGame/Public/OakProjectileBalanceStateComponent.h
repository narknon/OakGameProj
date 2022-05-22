#pragma once
#include "CoreMinimal.h"
#include "BalanceStateComponent.h"
#include "OakProjectileBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakProjectileBalanceStateComponent : public UBalanceStateComponent {
    GENERATED_BODY()
public:
    UOakProjectileBalanceStateComponent();
};

