#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "InventoryCustomizationBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventoryCustomizationBalanceStateComponent : public UOakInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
    UInventoryCustomizationBalanceStateComponent();
};

