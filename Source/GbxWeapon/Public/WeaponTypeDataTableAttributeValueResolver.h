#pragma once
#include "CoreMinimal.h"
#include "DataTableFunctionAttributeValueResolver.h"
#include "EWeaponTypeDataTableType.h"
#include "WeaponTypeDataTableAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWeaponTypeDataTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EWeaponTypeDataTableType DataTableFromWeaponType;
    
public:
    UWeaponTypeDataTableAttributeValueResolver();
};

