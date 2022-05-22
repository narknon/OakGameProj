#pragma once
#include "CoreMinimal.h"
#include "EIronBearHardPointOrientation.h"
#include "IronBearHardPointData.generated.h"

class UOakActionAbilityAugmentSlotData;
class UWeaponSlotData;

USTRUCT(Atomic, BlueprintType)
struct FIronBearHardPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UOakActionAbilityAugmentSlotData* Slot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UOakActionAbilityAugmentSlotData* ModSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWeaponSlotData* WeaponSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIronBearHardPointOrientation Orientation;
    
    OAKGAME_API FIronBearHardPointData();
};

