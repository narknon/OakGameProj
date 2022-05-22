#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventorySlotData.h"
#include "GunRackSlotData.generated.h"

class AActor;
class UWeaponTypeData;

UCLASS()
class UGunRackSlotData : public UInventorySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> EmptyPickupActor;
    
    UPROPERTY(EditAnywhere)
    UWeaponTypeData* WeaponTypeForSlot;
    
    UGunRackSlotData();
};

