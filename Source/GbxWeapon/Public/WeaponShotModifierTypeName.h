#pragma once
#include "CoreMinimal.h"
#include "EWeaponShotModifierType.h"
#include "WeaponShotModifierTypeName.generated.h"

USTRUCT(BlueprintType)
struct FWeaponShotModifierTypeName {
    GENERATED_BODY()
public:
    UPROPERTY()
    EWeaponShotModifierType Type;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString Tooltip;
    
    GBXWEAPON_API FWeaponShotModifierTypeName();
};

