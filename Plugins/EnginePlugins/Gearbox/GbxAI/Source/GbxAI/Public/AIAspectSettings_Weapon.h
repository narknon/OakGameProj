#pragma once
#include "CoreMinimal.h"
#include "AIWeaponUseSettings.h"
#include "GbxParam.h"
#include "AIAspectSettings_Weapon.generated.h"

class UGbxWeaponSlotData;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Weapon : public FAIWeaponUseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGbxWeaponSlotData*> WeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam WeaponUseModeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanUseWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanUseWeaponWhileMoving;
    
    UPROPERTY(EditAnywhere)
    bool bUseCanUseWeaponWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyShootWhenTargetIsKnown;
    
    FAIAspectSettings_Weapon();
};

