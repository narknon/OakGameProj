#pragma once
#include "CoreMinimal.h"
#include "AIAction_GoToPoint.h"
#include "AIAspectSettings_Weapon.h"
#include "GbxParam.h"
#include "AIAction_WeaponAtPoint.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_WeaponAtPoint : public UAIAction_GoToPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bCanShootWhileMoving;
    
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Weapon WeaponSettings;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HoldDuration;
    
    UPROPERTY(EditAnywhere)
    bool bUseHoldDuration;
    
private:
    UPROPERTY()
    uint8 WeaponAtPointVersion;
    
public:
    UAIAction_WeaponAtPoint();
};

