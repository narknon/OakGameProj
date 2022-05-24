#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "BalancedInventoryInfo.h"
#include "ItemPoolExpansionData.generated.h"

class UItemPoolData;

UCLASS()
class GBXINVENTORY_API UItemPoolExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UItemPoolData* ItemPoolToExpand;
    
    UPROPERTY(EditAnywhere)
    TArray<FBalancedInventoryInfo> BalancedItems;
    
    UItemPoolExpansionData();
};

