#pragma once
#include "CoreMinimal.h"
#include "DataTableFunctionAttributeValueResolver.h"
#include "EOakInventoryRarityBalanceTableType.h"
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

