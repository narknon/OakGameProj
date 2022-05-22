#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectType.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "WeaponEffectQueryData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponEffectQueryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponEffectType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponAttachmentVisibilityType> Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UseModeBitmask;
    
    GBXWEAPON_API FWeaponEffectQueryData();
};

