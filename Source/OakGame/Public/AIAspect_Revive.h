#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Revive.h"
#include "AIAspect_Revive.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UAIAspect_Revive : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Revive Settings;
    
    UAIAspect_Revive();
    UFUNCTION()
    static FString GetReviveSettingsDescription(const FAIAspectSettings_Revive& ReviveSettings, UProperty* Property);
    
};

