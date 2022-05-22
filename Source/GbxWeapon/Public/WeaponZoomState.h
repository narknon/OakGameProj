#pragma once
#include "CoreMinimal.h"
#include "EWeaponZoomState.h"
#include "WeaponZoomState.generated.h"

USTRUCT(BlueprintType)
struct FWeaponZoomState {
    GENERATED_BODY()
public:
    UPROPERTY()
    EWeaponZoomState State;
    
    UPROPERTY()
    uint8 Level;
    
    GBXWEAPON_API FWeaponZoomState();
};

