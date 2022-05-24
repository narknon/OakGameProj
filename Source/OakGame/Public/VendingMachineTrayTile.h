#pragma once
#include "CoreMinimal.h"
#include "VendingMachineTrayTile.generated.h"

class APickupableMeshActor;
class AActor;
class UInventoryBalanceStateComponent;

USTRUCT(BlueprintType)
struct FVendingMachineTrayTile {
    GENERATED_BODY()
public:
    UPROPERTY()
    APickupableMeshActor* PhysicalActor;
    
    UPROPERTY()
    AActor* InventoryActor;
    
    UPROPERTY(Export)
    UInventoryBalanceStateComponent* InventoryBalance;
    
    OAKGAME_API FVendingMachineTrayTile();
};

