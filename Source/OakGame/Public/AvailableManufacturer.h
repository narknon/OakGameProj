#pragma once
#include "CoreMinimal.h"
#include "AvailableManufacturer.generated.h"

class UManufacturerData;
class UOakDebugWeaponBuilderButton;

USTRUCT(BlueprintType)
struct FAvailableManufacturer {
    GENERATED_BODY()
public:
    UPROPERTY()
    UManufacturerData* Manufacturer;
    
    UPROPERTY(Export)
    UOakDebugWeaponBuilderButton* OptionButton;
    
    OAKGAME_API FAvailableManufacturer();
};

