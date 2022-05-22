#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Leap.h"
#include "AIAspect_Leap.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Leap : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Leap Settings;
    
    UAIAspect_Leap();
    UFUNCTION()
    static FString GetQuerySettingsDescription(const FAIAspectSettings_Leap& LeapSettings, UProperty* Property);
    
};

