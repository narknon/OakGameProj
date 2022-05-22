#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "Engine/DataTable.h"
#include "DataTableAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UDataTableAttributeValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FDataTableRowHandle DataTableRow;
    
    UPROPERTY(EditInstanceOnly)
    FString DataTableColumn;
    
public:
    UDataTableAttributeValueResolver();
protected:
    UFUNCTION()
    void GetDataTableColumnNames(TArray<FString>& ValueNames) const;
    
};

