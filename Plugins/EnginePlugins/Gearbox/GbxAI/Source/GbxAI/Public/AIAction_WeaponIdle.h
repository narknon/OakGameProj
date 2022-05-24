#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAspectSettings_Weapon.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAction_WeaponIdle.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_WeaponIdle : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Weapon WeaponSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation RotationSettings;
    
    UAIAction_WeaponIdle();
};

