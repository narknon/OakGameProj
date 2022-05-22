#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "WeaponSlotEntry.generated.h"

class UObject;
class UWeaponSlotData;
class AWeapon;

USTRUCT(BlueprintType)
struct FWeaponSlotEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWeaponSlotData* SlotData;
    
    UPROPERTY()
    AWeapon* AttachedWeapon;
    
    UPROPERTY()
    AWeapon* PendingAttachedWeapon;
    
    UPROPERTY()
    AWeapon* ClientPredictedPendingAttachedWeapon;
    
    UPROPERTY()
    UObject* RestoreSlotData;
    
protected:
    UPROPERTY()
    FGameResourcePoolReference AccuracyPool;
    
public:
    OAKGAME_API FWeaponSlotEntry();
};

