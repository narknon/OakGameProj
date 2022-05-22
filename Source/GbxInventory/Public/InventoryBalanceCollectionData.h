#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "InventoryBalanceCollectionData.generated.h"

class UInventoryBalanceCollectionData;
class UInventoryBalanceData;

UCLASS()
class GBXINVENTORY_API UInventoryBalanceCollectionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UInventoryBalanceCollectionData* ParentCollection;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UInventoryBalanceData>> InventoryBalanceList;
    
    UPROPERTY(Transient)
    TArray<UInventoryBalanceData*> RuntimeInventoryBalanceList;
    
public:
    UInventoryBalanceCollectionData();
};

