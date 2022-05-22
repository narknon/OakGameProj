#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Weapon.h"
#include "AIAspect_Weapon.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Weapon : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Weapon Settings;
    
    UAIAspect_Weapon();
    UFUNCTION()
    static FString GetWeaponSettingsDescription(const FAIAspectSettings_Weapon& WeaponSettings, UProperty* Property);
    
};

