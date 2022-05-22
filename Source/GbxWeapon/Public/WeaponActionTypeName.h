#pragma once
#include "CoreMinimal.h"
#include "EWeaponActionType.h"
#include "WeaponActionTypeName.generated.h"

USTRUCT(BlueprintType)
struct FWeaponActionTypeName {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EWeaponActionType> Type;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString Tooltip;
    
    GBXWEAPON_API FWeaponActionTypeName();
};

