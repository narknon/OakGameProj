#pragma once
#include "CoreMinimal.h"
#include "ItemPoolInfo.h"
#include "ItemPoolCollection.generated.h"

class UItemPoolListData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FItemPoolCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FItemPoolInfo> ItemPools;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemPoolListData*> ItemPoolLists;
    
public:
    FItemPoolCollection();
};

