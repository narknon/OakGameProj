#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceData.h"
#include "EOakLeague.h"
#include "OakInventoryBalanceData.generated.h"

UCLASS()
class OAKGAME_API UOakInventoryBalanceData : public UInventoryBalanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOakLeague> SourceLeague;
    
    UOakInventoryBalanceData();
};

