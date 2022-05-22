#pragma once
#include "CoreMinimal.h"
#include "EWeaponEquipType.h"
#include "ReplicatedPlayerEchoDeviceState.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedPlayerEchoDeviceState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bWantsToBeActive;
    
    UPROPERTY()
    EWeaponEquipType EquipType;
    
    UPROPERTY()
    FName ScreenName;
    
    OAKGAME_API FReplicatedPlayerEchoDeviceState();
};

