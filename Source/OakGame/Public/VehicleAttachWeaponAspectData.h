#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakVehicleAspectData.h"
#include "VehicleAttachWeaponAspectData.generated.h"

class UOakWeaponVehicleData;
class AOakWeapon_Vehicle;
class UWeaponSlotData;

UCLASS(EditInlineNew)
class UVehicleAttachWeaponAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<AOakWeapon_Vehicle> Weapon;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<AOakWeapon_Vehicle> WeaponClass;
    
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<UOakWeaponVehicleData> WeaponData;
    
    UPROPERTY(EditInstanceOnly)
    bool SpawnWeapon;
    
    UPROPERTY(EditInstanceOnly)
    UWeaponSlotData* WantedActiveWeaponSlot;
    
    UPROPERTY(EditAnywhere)
    int32 PrefferedSlotId;
    
    UVehicleAttachWeaponAspectData();
};

