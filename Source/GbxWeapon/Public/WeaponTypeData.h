#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "Engine/DataTable.h"
#include "WeaponTypeData.generated.h"

UCLASS(BlueprintType)
class GBXWEAPON_API UWeaponTypeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle BaseWeaponBalanceTableRow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ManufacturerDamageScaleRow;
    
    UWeaponTypeData();
};

