#pragma once
#include "CoreMinimal.h"
#include "ManufacturerWeaponSightData.generated.h"

class UManufacturerData;
class UDataTable;

USTRUCT(BlueprintType)
struct FManufacturerWeaponSightData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UManufacturerData* Manufacturer;
    
    UPROPERTY(EditAnywhere)
    UDataTable* RarityTable;
    
    OAKGAME_API FManufacturerWeaponSightData();
};

