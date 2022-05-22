#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuItemGrouping.generated.h"

class UWeaponTypeAsset;
class UManufacturerData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryMenuItemGrouping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    UWeaponTypeAsset* WeaponTypeData;
    
    UPROPERTY(EditAnywhere)
    UManufacturerData* ManufacturerData;
    
    FOakInventoryMenuItemGrouping();
};

