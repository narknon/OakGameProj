#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_EnvQuery.h"
#include "AIAspect.h"
#include "AIAspectEnvQueryValueChangedBlueprintDelegateDelegate.h"
#include "AIAspect_EnvQuery.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_EnvQuery : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery Settings;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FAIAspectEnvQueryValueChangedBlueprintDelegate OnValueUpdatedBP;
    
    UAIAspect_EnvQuery();
    UFUNCTION()
    static FString GetQuerySettingsDescription(const FAIAspectSettings_EnvQuery& QuerySettings, UProperty* Property);
    
};

