#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAspect_Navigation.generated.h"

class UProperty;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Navigation : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation Settings;
    
    UAIAspect_Navigation();
    UFUNCTION()
    static FString GetNavSettingsDescription(const FAIAspectSettings_Navigation& NavSettings, UProperty* Property);
    
};

