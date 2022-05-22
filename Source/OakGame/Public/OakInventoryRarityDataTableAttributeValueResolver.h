#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryRarityBalanceTableType.h"
#include "DataTableFunctionAttributeValueResolver.h"
#include "OakInventoryRarityDataTableAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UOakInventoryRarityDataTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOakInventoryRarityBalanceTableType DataTableFromRarity;
    
public:
    UOakInventoryRarityDataTableAttributeValueResolver();
};

