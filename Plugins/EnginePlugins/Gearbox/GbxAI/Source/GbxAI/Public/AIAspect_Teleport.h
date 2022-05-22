#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Teleport.h"
#include "AIAspect_Teleport.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Teleport : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Teleport Settings;
    
    UAIAspect_Teleport();
    UFUNCTION()
    static FString GetTeleportSettingsDescription(const FAIAspectSettings_Teleport& TeleportSettings, UProperty* Property);
    
};

