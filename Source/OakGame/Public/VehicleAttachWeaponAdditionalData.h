#pragma once
#include "CoreMinimal.h"
#include "VehicleAttachWeaponAdditionalData.generated.h"

USTRUCT()
struct FVehicleAttachWeaponAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FName Key;
    
    UPROPERTY(EditInstanceOnly)
    FName Data;
    
    OAKGAME_API FVehicleAttachWeaponAdditionalData();
};

