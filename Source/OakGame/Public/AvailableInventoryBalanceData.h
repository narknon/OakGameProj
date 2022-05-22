#pragma once
#include "CoreMinimal.h"
#include "AvailableInventoryBalanceData.generated.h"

class UInventoryBalanceData;
class UOakDebugWeaponBuilderButton;

USTRUCT(BlueprintType)
struct FAvailableInventoryBalanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInventoryBalanceData* InventoryBalance;
    
    UPROPERTY(Export)
    UOakDebugWeaponBuilderButton* OptionButton;
    
    OAKGAME_API FAvailableInventoryBalanceData();
};

