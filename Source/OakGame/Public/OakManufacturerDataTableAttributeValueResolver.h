#pragma once
#include "CoreMinimal.h"
#include "DataTableFunctionAttributeValueResolver.h"
#include "EOakManufacturerBalanceTableType.h"
#include "OakManufacturerDataTableAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UOakManufacturerDataTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOakManufacturerBalanceTableType DataTableFromManufactuer;
    
public:
    UOakManufacturerDataTableAttributeValueResolver();
};

