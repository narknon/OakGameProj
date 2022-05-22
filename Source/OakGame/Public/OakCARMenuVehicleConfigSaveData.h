#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuVehicleConfigSaveData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCARMenuVehicleConfigSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LoadoutSaveName;
    
    UPROPERTY(EditAnywhere)
    FString BodyAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString WheelAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString ArmorAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString CoreModAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString GunnerWeaponAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString DriverWeaponAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString OrnamentAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString MaterialDecalAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString MaterialAssetPath;
    
    UPROPERTY(EditAnywhere)
    int32 ColorIndex1;
    
    UPROPERTY(EditAnywhere)
    int32 ColorIndex2;
    
    UPROPERTY(EditAnywhere)
    int32 ColorIndex3;
    
    FOakCARMenuVehicleConfigSaveData();
};

