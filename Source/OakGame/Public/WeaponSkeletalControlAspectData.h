#pragma once
#include "CoreMinimal.h"
#include "WeaponEffectBaseAspectData.h"
#include "WeaponRegisterSkeletalControlData.h"
#include "WeaponSkeletalControlAspectData.generated.h"

UCLASS(EditInlineNew)
class UWeaponSkeletalControlAspectData : public UWeaponEffectBaseAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FWeaponRegisterSkeletalControlData ControlData;
    
public:
    UWeaponSkeletalControlAspectData();
};

