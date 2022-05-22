#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "BalancedInventoryInfo.generated.h"

class UItemPoolData;
class UInventoryBalanceData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FBalancedInventoryInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UItemPoolData* ItemPoolData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryBalanceData> InventoryBalanceData;
    
    UPROPERTY()
    UInventoryBalanceData* ResolvedInventoryBalanceData;
    
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Weight;
    
    FBalancedInventoryInfo();
};

