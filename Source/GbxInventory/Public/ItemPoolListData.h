#pragma once
#include "CoreMinimal.h"
#include "ItemPoolListInterface.h"
#include "ItemPoolInfo.h"
#include "ItemPoolListData.generated.h"

class UItemPoolListData;

UCLASS()
class GBXINVENTORY_API UItemPoolListData : public UItemPoolListInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UItemPoolListData*> ItemPoolIncludedLists;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemPoolInfo> ItemPools;
    
public:
    UItemPoolListData();
};

