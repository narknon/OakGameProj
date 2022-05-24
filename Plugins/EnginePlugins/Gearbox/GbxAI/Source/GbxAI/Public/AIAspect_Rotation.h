#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_RotationChannel.h"
#include "AIAspect.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAspect_Rotation.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Rotation : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation Settings;
    
    UAIAspect_Rotation();
    UFUNCTION()
    static FString GetRotationSettingsDescription(const FAIAspectSettings_Rotation& RotationSettings, UProperty* Property);
    
    UFUNCTION()
    static FString GetRotationChannelSettingsDescription(const FAIAspectSettings_RotationChannel& RotationChannelSettings, UProperty* Property);
    
};

