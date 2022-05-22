#pragma once
#include "CoreMinimal.h"
#include "GFxVendingMachineDisplayMode.h"
#include "VendingTabOrder.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FVendingTabOrder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    GFxVendingMachineDisplayMode BuyTab;
    
    UPROPERTY(EditAnywhere)
    GFxVendingMachineDisplayMode BuyBackTab;
    
    UPROPERTY(EditAnywhere)
    GFxVendingMachineDisplayMode SellTab;
    
    UPROPERTY(EditAnywhere)
    TArray<GFxVendingMachineDisplayMode> TabOrder;
    
    FVendingTabOrder();
};

