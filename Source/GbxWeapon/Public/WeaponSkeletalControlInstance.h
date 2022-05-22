#pragma once
#include "CoreMinimal.h"
#include "WeaponSkeletalControlInstance.generated.h"

class UWeaponSkeletalControlBase;

USTRUCT(BlueprintType)
struct FWeaponSkeletalControlInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWeaponSkeletalControlBase* Data;
    
    GBXWEAPON_API FWeaponSkeletalControlInstance();
};

