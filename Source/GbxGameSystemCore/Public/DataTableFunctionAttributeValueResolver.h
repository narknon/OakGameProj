#pragma once
#include "CoreMinimal.h"
#include "DataTableAttributeValueResolver.h"
#include "Engine/DataTable.h"
#include "DataTableFunctionAttributeValueResolver.generated.h"

class UScriptStruct;
class UObject;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UDataTableFunctionAttributeValueResolver : public UDataTableAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UScriptStruct* DataTableStruct;
    
public:
    UDataTableFunctionAttributeValueResolver();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FDataTableRowHandle GetDataTableRow(const UObject* Context) const;
    
};

