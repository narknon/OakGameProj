#pragma once
#include "CoreMinimal.h"
#include "VehicleUnlockedSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleUnlockedSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString AssetPath;
    
    UPROPERTY(VisibleAnywhere)
    bool bJustUnlocked;
    
    OAKGAME_API FVehicleUnlockedSaveGameData();
};

