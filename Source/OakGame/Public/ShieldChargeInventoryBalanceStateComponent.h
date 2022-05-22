#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "ShieldChargeInventoryBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShieldChargeInventoryBalanceStateComponent : public UOakInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
    UShieldChargeInventoryBalanceStateComponent();
};

