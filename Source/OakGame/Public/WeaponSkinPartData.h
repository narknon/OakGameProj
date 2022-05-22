#pragma once
#include "CoreMinimal.h"
#include "OakInventoryCustomizationPartData.h"
#include "WeaponSkinManufacturerData.h"
#include "WeaponSkinPartData.generated.h"

UCLASS(Abstract)
class OAKGAME_API UWeaponSkinPartData : public UOakInventoryCustomizationPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FWeaponSkinManufacturerData> Manufacturers;
    
    UWeaponSkinPartData();
};

