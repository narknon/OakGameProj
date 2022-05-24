#pragma once
#include "CoreMinimal.h"
#include "OakGFxMenuData.h"
#include "GFxVendingMachineMenuFilter.h"
#include "GFxVendingMachineMenuData.generated.h"

UCLASS()
class OAKGAME_API UGFxVendingMachineMenuData : public UOakGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGFxVendingMachineMenuFilter> Filters;
    
    UGFxVendingMachineMenuData();
};

