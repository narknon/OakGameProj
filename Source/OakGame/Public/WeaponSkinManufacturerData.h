#pragma once
#include "CoreMinimal.h"
#include "WeaponSkinWeaponTypeData.h"
#include "WeaponSkinManufacturerData.generated.h"

class UManufacturerData;

USTRUCT(BlueprintType)
struct FWeaponSkinManufacturerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UManufacturerData* Manufacturer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeaponSkinWeaponTypeData> WeaponTypes;
    
    OAKGAME_API FWeaponSkinManufacturerData();
};

