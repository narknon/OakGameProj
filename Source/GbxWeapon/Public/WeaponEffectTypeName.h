#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectType.h"
#include "WeaponEffectTypeName.generated.h"

USTRUCT(BlueprintType)
struct FWeaponEffectTypeName {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EWeaponEffectType> Type;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString Tooltip;
    
    GBXWEAPON_API FWeaponEffectTypeName();
};

