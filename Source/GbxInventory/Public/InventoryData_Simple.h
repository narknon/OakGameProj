#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryData.h"
#include "InventoryData_Simple.generated.h"

class UInventoryBalanceStateComponent;
class UInventoryRarityData;
class UManufacturerData;
class UInventoryBalanceData;

UCLASS(Abstract)
class GBXINVENTORY_API UInventoryData_Simple : public UInventoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInventoryBalanceStateComponent> InventoryBalanceStateClass;
    
    UPROPERTY(EditAnywhere)
    UManufacturerData* ManufacturerData;
    
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* RarityData;
    
    UPROPERTY(VisibleInstanceOnly)
    UInventoryBalanceData* BalanceData;
    
public:
    UInventoryData_Simple();
};

