#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimNotify.h"
#include "EWeaponEffectType.h"
#include "EWeaponSkeletalControlEvent.h"
#include "AnimNotify_WeaponSkeletalControlEvent.generated.h"

UCLASS(CollapseCategories)
class GBXWEAPON_API UAnimNotify_WeaponSkeletalControlEvent : public UWeaponAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponEffectType> ControlType;
    
    UPROPERTY(EditAnywhere)
    FName ControlName;
    
    UPROPERTY(EditAnywhere)
    EWeaponSkeletalControlEvent ControlEvent;
    
    UPROPERTY(EditAnywhere)
    float ControlInput;
    
    UAnimNotify_WeaponSkeletalControlEvent();
};

