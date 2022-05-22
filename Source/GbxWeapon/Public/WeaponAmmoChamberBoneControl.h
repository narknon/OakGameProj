#pragma once
#include "CoreMinimal.h"
#include "WeaponSkeletalControlBase.h"
#include "WeaponAmmoChamberBoneControl.generated.h"

UCLASS(EditInlineNew)
class UWeaponAmmoChamberBoneControl : public UWeaponSkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> AmmoBoneNames;
    
    UWeaponAmmoChamberBoneControl();
};

