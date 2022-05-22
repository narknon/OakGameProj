#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuVehicleConfig.generated.h"

class UOakCARVehicleData;
class UOakCARVehiclePartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCARMenuVehicleConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LoadoutSaveName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehicleData> Body;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> Wheel;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> Armor;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> CoreMod;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> GunnerWeapon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> DriverWeapon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> Ornament;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> MaterialDecal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCARVehiclePartData> Material;
    
    UPROPERTY(EditAnywhere)
    int32 ColorIndex1;
    
    UPROPERTY(EditAnywhere)
    int32 ColorIndex2;
    
    UPROPERTY(EditAnywhere)
    int32 ColorIndex3;
    
    FOakCARMenuVehicleConfig();
};

