#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectType.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "WeaponRegisterSkeletalControlData.generated.h"

class UWeaponSkeletalControlBase;

USTRUCT(BlueprintType)
struct FWeaponRegisterSkeletalControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponEffectType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponAttachmentVisibilityType> Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayerOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWeaponSkeletalControlBase* Control;
    
    GBXWEAPON_API FWeaponRegisterSkeletalControlData();
};

