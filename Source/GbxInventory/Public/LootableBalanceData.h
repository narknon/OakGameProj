#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "LootConfigurationInfo.h"
#include "LootableBalanceData.generated.h"

class ULootListData;
class UAttributeInitializer;

UCLASS()
class GBXINVENTORY_API ULootableBalanceData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FLootConfigurationInfo> DefaultLoot;
    
    UPROPERTY(EditAnywhere)
    TArray<ULootListData*> DefaultIncludedLootLists;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAttributeInitializer> DefaultLootGameStageVarianceFormula;
    
public:
    ULootableBalanceData();
};

