#pragma once
#include "CoreMinimal.h"
#include "InventoryRarityData.h"
#include "Engine/DataTable.h"
#include "OakInventoryRarityData.generated.h"

class UZoneMapPOITypeData;

UCLASS()
class UOakInventoryRarityData : public UInventoryRarityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle WeaponDataTableRow;
    
    UPROPERTY(EditAnywhere)
    UZoneMapPOITypeData* ZoneMapPOIType;
    
    UOakInventoryRarityData();
};

