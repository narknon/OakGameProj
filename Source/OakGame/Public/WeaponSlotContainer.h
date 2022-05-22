#pragma once
#include "CoreMinimal.h"
#include "WeaponSlotEntry.h"
#include "WeaponSlotContainer.generated.h"

USTRUCT(BlueprintType)
struct FWeaponSlotContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FWeaponSlotEntry> WeaponSlots;
    
    OAKGAME_API FWeaponSlotContainer();
};

