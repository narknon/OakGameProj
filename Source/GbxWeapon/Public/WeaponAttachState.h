#pragma once
#include "CoreMinimal.h"
#include "EWeaponPutDownType.h"
#include "EWeaponEquipType.h"
#include "WeaponAttachState.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FWeaponAttachState {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 NetworkID;
    
    UPROPERTY()
    uint8 Slot;
    
    UPROPERTY()
    APawn* Instigator;
    
    UPROPERTY()
    EWeaponEquipType EquipType;
    
    UPROPERTY()
    EWeaponPutDownType PutDownType;
    
    GBXWEAPON_API FWeaponAttachState();
};

