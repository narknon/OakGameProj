#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceStateComponent.h"
#include "VehicleInventoryBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleInventoryBalanceStateComponent : public UInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
    UVehicleInventoryBalanceStateComponent();
};

